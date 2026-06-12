import os
import sys
import subprocess
from flask import Flask, request, jsonify, render_template

# Add strategies to path so we can import them
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '../rv5as_test_ws/src/calligraphy_pkg/calligraphy_pkg')))
from strategies import TextCalligraphyStrategy, ImageVectorizationStrategy

app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = '/tmp'

# We keep track of the running process so we can kill it
current_process = None

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/api/preview', methods=['POST'])
def preview():
    mode = request.form.get('mode', 'text')
    
    if mode == 'text':
        text = request.form.get('text', 'HELLO ROS2')
        letter_size = float(request.form.get('letter_size', '8.0'))
        strategy = TextCalligraphyStrategy(text=text, letter_size_mm=letter_size)
    elif mode == 'image':
        if 'image' not in request.files:
            return jsonify({'success': False, 'error': 'No image uploaded'})
        file = request.files['image']
        if file.filename == '':
            return jsonify({'success': False, 'error': 'No image selected'})
            
        filepath = os.path.join(app.config['UPLOAD_FOLDER'], file.filename)
        file.save(filepath)
        
        detail_level = int(request.form.get('detail_level', '20'))
        strategy = ImageVectorizationStrategy(image_path=filepath, detail_level=detail_level)
    else:
        return jsonify({'success': False, 'error': 'Invalid mode'})
        
    try:
        strokes_uv = strategy.generate()
        return jsonify({'success': True, 'strokes_uv': strokes_uv})
    except Exception as e:
        return jsonify({'success': False, 'error': str(e)})

@app.route('/api/execute', methods=['POST'])
def execute():
    global current_process
    mode = request.form.get('mode', 'text')
    
    if mode == 'text':
        text = request.form.get('text', 'HELLO ROS2')
        letter_size = request.form.get('letter_size', '8.0')
        cmd = f'bash -c "cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws && source install/setup.bash && ros2 run calligraphy_pkg calligraphy_pipeline_node --ros-args -p mode:=text -p text:=\\"{text}\\" -p letter_size:={letter_size} -p speed_scale:=0.2"'
        
    elif mode == 'image':
        if 'image' not in request.files:
            return jsonify({'success': False, 'error': 'No image uploaded'})
        file = request.files['image']
        if file.filename == '':
            return jsonify({'success': False, 'error': 'No image selected'})
            
        filepath = os.path.join(app.config['UPLOAD_FOLDER'], file.filename)
        file.save(filepath)
        
        detail_level = request.form.get('detail_level', '20')
        cmd = f'bash -c "cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws && source install/setup.bash && ros2 run calligraphy_pkg calligraphy_pipeline_node --ros-args -p mode:=image -p image_path:=\\"{filepath}\\" -p detail_level:={detail_level} -p speed_scale:=0.2"'
        
    else:
        return jsonify({'success': False, 'error': 'Invalid mode'})

    try:
        # Stop existing process if running
        if current_process is not None:
            current_process.terminate()
            current_process = None
            
        current_process = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        return jsonify({'success': True, 'message': f'Executing {mode} pipeline... Check RViz!'})
    except Exception as e:
        return jsonify({'success': False, 'error': str(e)})

@app.route('/api/stop', methods=['POST'])
def stop():
    global current_process
    if current_process is not None:
        current_process.terminate()
        current_process = None
        # Kill any dangling ros2 run commands
        subprocess.run(['pkill', '-f', 'calligraphy_pipeline_node'])
        
    # Trigger the Home sequence safely
    cmd = f'bash -c "cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws && source install/setup.bash && ros2 run calligraphy_pkg calligraphy_pipeline_node --ros-args -p mode:=home -p speed_scale:=0.2"'
    current_process = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
    return jsonify({'success': True, 'message': 'Stopped execution. Returning to Home.'})

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)
