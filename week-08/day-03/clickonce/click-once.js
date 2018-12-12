const button = document.querySelector('button');

let time = new Date();

const getTime = () => {
console.log(time.getTime());
button.removeEventListener('click', getTime)
}

button.addEventListener('click', getTime);