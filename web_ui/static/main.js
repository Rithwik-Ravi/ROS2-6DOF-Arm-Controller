const leftCanvas = document.getElementById('leftCanvas');
const leftCtx = leftCanvas.getContext('2d');
const rightCanvas = document.getElementById('rightCanvas');
const rightCtx = rightCanvas.getContext('2d');
const statusLabel = document.getElementById('statusLabel');

let currentMode = 'text';

function setStatus(msg, isError=false) {
    statusLabel.textContent = msg;
    statusLabel.style.color = isError ? '#ef4444' : '#22c55e';
}

function clearCanvas(ctx, canvas) {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
}

function drawStrokes(strokes_uv) {
    clearCanvas(rightCtx, rightCanvas);
    
    // The right canvas represents a 200x200mm physical area
    // strokes_uv contains points in UV space [0.0, 1.0]
    
    rightCtx.lineWidth = 1.5;
    
    strokes_uv.forEach(stroke => {
        if(stroke.length < 2) return;
        
        // Draw the path
        rightCtx.beginPath();
        rightCtx.strokeStyle = '#0000ff'; // Blue lines for path
        
        const startX = stroke[0][0] * rightCanvas.width;
        const startY = stroke[0][1] * rightCanvas.height;
        rightCtx.moveTo(startX, startY);
        
        for(let i=1; i<stroke.length; i++) {
            const x = stroke[i][0] * rightCanvas.width;
            const y = stroke[i][1] * rightCanvas.height;
            rightCtx.lineTo(x, y);
        }
        rightCtx.stroke();
        
        // Draw green dot at start
        rightCtx.beginPath();
        rightCtx.fillStyle = '#22c55e';
        rightCtx.arc(startX, startY, 3, 0, 2*Math.PI);
        rightCtx.fill();
        
        // Draw red dot at end
        const endX = stroke[stroke.length-1][0] * rightCanvas.width;
        const endY = stroke[stroke.length-1][1] * rightCanvas.height;
        rightCtx.beginPath();
        rightCtx.fillStyle = '#ef4444';
        rightCtx.arc(endX, endY, 3, 0, 2*Math.PI);
        rightCtx.fill();
    });
}

document.getElementById('generateTextBtn').addEventListener('click', async () => {
    currentMode = 'text';
    const text = document.getElementById('textInput').value;
    const letterSize = document.getElementById('letterSizeInput').value;
    
    // Draw left canvas
    clearCanvas(leftCtx, leftCanvas);
    leftCtx.fillStyle = 'black';
    leftCtx.font = "30px Inter";
    leftCtx.textAlign = "center";
    leftCtx.textBaseline = "middle";
    // simple word wrap for left canvas preview
    leftCtx.fillText(text.substring(0, 20) + (text.length>20?"...":""), leftCanvas.width/2, leftCanvas.height/2);
    
    setStatus("Generating path...");
    const formData = new FormData();
    formData.append('mode', 'text');
    formData.append('text', text);
    formData.append('letter_size', letterSize);
    
    try {
        const res = await fetch('/api/preview', { method: 'POST', body: formData });
        const data = await res.json();
        if(data.success) {
            drawStrokes(data.strokes_uv);
            setStatus(`Preview generated (${data.strokes_uv.length} strokes).`);
        } else {
            setStatus("Preview Error: " + data.error, true);
        }
    } catch(err) {
        setStatus("Network error.", true);
    }
});

const imageInput = document.getElementById('imageInput');
imageInput.addEventListener('change', () => {
    if(imageInput.files && imageInput.files[0]) {
        const reader = new FileReader();
        reader.onload = function(e) {
            const img = new Image();
            img.onload = function() {
                clearCanvas(leftCtx, leftCanvas);
                // Draw image scaled to fit
                const scale = Math.min(leftCanvas.width/img.width, leftCanvas.height/img.height);
                const x = (leftCanvas.width / 2) - (img.width / 2) * scale;
                const y = (leftCanvas.height / 2) - (img.height / 2) * scale;
                leftCtx.drawImage(img, x, y, img.width * scale, img.height * scale);
            }
            img.src = e.target.result;
        }
        reader.readAsDataURL(imageInput.files[0]);
    }
});

document.getElementById('generateImageBtn').addEventListener('click', async () => {
    currentMode = 'image';
    if(!imageInput.files || imageInput.files.length === 0) {
        setStatus("Please upload an image first.", true);
        return;
    }
    
    setStatus("Vectorizing image...");
    const detailLevel = document.getElementById('detailLevelInput').value;
    
    const formData = new FormData();
    formData.append('mode', 'image');
    formData.append('image', imageInput.files[0]);
    formData.append('detail_level', detailLevel);
    
    try {
        const res = await fetch('/api/preview', { method: 'POST', body: formData });
        const data = await res.json();
        if(data.success) {
            drawStrokes(data.strokes_uv);
            setStatus(`Preview generated (${data.strokes_uv.length} strokes).`);
        } else {
            setStatus("Preview Error: " + data.error, true);
        }
    } catch(err) {
        setStatus("Network error.", true);
    }
});

document.getElementById('executeBtn').addEventListener('click', async () => {
    setStatus("Executing on robot...");
    const formData = new FormData();
    formData.append('mode', currentMode);
    formData.append('speed_scale', '0.2'); // Parameterized speed to prevent jerkiness
    
    if(currentMode === 'text') {
        formData.append('text', document.getElementById('textInput').value);
        formData.append('letter_size', document.getElementById('letterSizeInput').value);
    } else {
        if(!imageInput.files[0]) return setStatus("No image selected", true);
        formData.append('image', imageInput.files[0]);
        formData.append('detail_level', document.getElementById('detailLevelInput').value);
    }
    
    try {
        const res = await fetch('/api/execute', { method: 'POST', body: formData });
        const data = await res.json();
        if(data.success) {
            setStatus(data.message);
        } else {
            setStatus("Execute Error: " + data.error, true);
        }
    } catch(err) {
        setStatus("Network error.", true);
    }
});

document.getElementById('stopBtn').addEventListener('click', async () => {
    setStatus("Stopping...");
    try {
        const res = await fetch('/api/stop', { method: 'POST' });
        const data = await res.json();
        setStatus(data.message, !data.success);
    } catch(err) {
        setStatus("Network error.", true);
    }
});
