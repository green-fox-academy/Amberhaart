const button = document.querySelector('button');
const ul = document.querySelectorAll('li');
let counter = parseInt(0);
let result = document.querySelector('.result');

const countList = () => {
    ul.forEach(element => {
        counter+= 1;
    });
    result.textContent = counter;
};

button.addEventListener('click', countList);