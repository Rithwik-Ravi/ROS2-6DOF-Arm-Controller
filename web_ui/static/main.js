document.querySelectorAll('.tab').forEach(tab => {
    tab.addEventListener('click', () => {
        document.querySelectorAll('.tab').forEach(t => t.classList.remove('active'));
        document.querySelectorAll('.section').forEach(s => s.classList.remove('active'));
        
        tab.classList.add('active');
        const mode = tab.dataset.mode;
        document.getElementById('modeInput').value = mode;
        document.getElementById(mode + 'Section').classList.add('active');
    });
});

const fileInput = document.querySelector('.file-input');
const fileMsg = document.querySelector('.file-msg');
const dropArea = document.querySelector('.file-drop-area');

fileInput.addEventListener('change', () => {
    if(fileInput.files.length > 0) {
        fileMsg.textContent = fileInput.files[0].name;
        dropArea.classList.add('is-active');
    }
});

document.getElementById('controlForm').addEventListener('submit', async (e) => {
    e.preventDefault();
    const btn = document.getElementById('executeBtn');
    const status = document.getElementById('statusMsg');
    
    btn.textContent = 'Sending to Robot...';
    status.textContent = '';
    status.style.color = '#4ade80';

    try {
        const formData = new FormData(e.target);
        const res = await fetch('/api/execute', {
            method: 'POST',
            body: formData
        });
        const data = await res.json();
        
        if(data.success) {
            status.textContent = data.message;
        } else {
            status.textContent = 'Error: ' + data.error;
            status.style.color = '#f87171';
        }
    } catch (err) {
        status.textContent = 'Connection error. Ensure Flask server is running.';
        status.style.color = '#f87171';
    } finally {
        btn.textContent = 'Execute Sequence';
    }
});
