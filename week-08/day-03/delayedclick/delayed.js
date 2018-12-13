const body = document.querySelector('body');
body.style.display = 'flex';
body.style.justifyContent = 'center';

const container = document.createElement('div');
container.style.display = 'block';
body.appendChild(container);

const button = document.querySelector('button');
container.appendChild(button);


const delayTimer = () => {
    const underText = document.createElement('div');
    underText.style.display = 'block';
    underText.textContent = "2 seconds have ellapsed";
    container.appendChild(underText);
}

//button.addEventListener('click', delayTimer);


