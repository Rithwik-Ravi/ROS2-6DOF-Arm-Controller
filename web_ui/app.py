import os
import subprocess
from flask import Flask, request, jsonify, render_template

app = Flask(__name__)
app.config['UPLOAD_FOLDER'] = '/tmp'

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/api/execute', methods=['POST'])
def execute():
    mode = request.form.get('mode', 'text')
    
    if mode == 'text':
        text = request.form.get('text', 'HELLO ROS2')
        cmd = f'bash -c "cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws && source install/setup.bash && ros2 run square_path_pkg calligraphy_pipeline_node --ros-args -p mode:=text -p text:=\\"{text}\\""'
        
    elif mode == 'image':
        if 'image' not in request.files:
            return jsonify({'success': False, 'error': 'No image uploaded'})
        file = request.files['image']
        if file.filename == '':
            return jsonify({'success': False, 'error': 'No image selected'})
            
        filepath = os.path.join(app.config['UPLOAD_FOLDER'], file.filename)
        file.save(filepath)
        
        cmd = f'bash -c "cd ~/Desktop/Robotic_Arm_ROS2/rv5as_test_ws && source install/setup.bash && ros2 run square_path_pkg calligraphy_pipeline_node --ros-args -p mode:=image -p image_path:=\\"{filepath}\\""'
        
    else:
        return jsonify({'success': False, 'error': 'Invalid mode'})

    try:
        # Popen runs in the background
        subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        return jsonify({'success': True, 'message': f'Executing {mode} pipeline... Check terminal or RViz!'})
    except Exception as e:
        return jsonify({'success': False, 'error': str(e)})

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)
