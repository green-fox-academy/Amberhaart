const button = document.querySelector('button');

let time = new Date();

const getTime = () => {
console.log(time);
//button.removeEventListener('click', getTime)                          //solution 1
button.disabled = true;                                                 //solution 2
}

button.addEventListener('click', getTime);