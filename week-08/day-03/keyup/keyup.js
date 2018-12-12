let result = document.querySelector('h1');

const lastPressed = () => {
    result.textContent = 'Last pressed key code is: ' + event.key;
}

document.addEventListener('keyup', lastPressed)