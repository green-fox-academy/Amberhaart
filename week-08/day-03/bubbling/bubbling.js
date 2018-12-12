const nav = document.querySelector('nav');
const button = document.querySelector('button');
const image = document.querySelector('.img-inspector');
let num = 10;
let zoom = 100;

const move = (event) => {
    if (event.target.dataset.direction === 'left') {
        image.setAttribute('style', `background-position-x: ${num}px;`);
        num -= 10;
    } else if (event.target.dataset.direction === 'right') {
        image.setAttribute('style', `background-position-x: ${num}px;`);
        num += 10;
    } else if (event.target.dataset.direction === 'up') {
        image.setAttribute('style', `background-position-y: ${num}px;`);
        num -= 10;
    } else if (event.target.dataset.direction === 'down') {
        image.setAttribute('style', `background-position-y: ${num}px;`);
        num += 10;
    } else if (event.target.dataset.direction === 'in') {
        image.setAttribute('style', `background-size: ${zoom}%;`);
        zoom += 20;
    } else if (event.target.dataset.direction === 'out') {
        image.setAttribute('style', `background-size: ${zoom}%;`);
        zoom -= 20;
    }
};

nav.addEventListener('click', move);