const asteroidList = document.querySelector('ul.asteroids');
const newAsteroid = document.createElement('li');

newAsteroid.textContent = 'The Green Fox';
asteroidList.appendChild(newAsteroid);

const lampAsteroid = document.createElement('li');

lampAsteroid.textContent = 'The Lamplighter';
asteroidList.appendChild(lampAsteroid);

const cont = document.querySelector('.container');
cont.innerHTML = "<h1>I can add elements to the DOM!</h1>";

const img = document.createElement("img");
img.src = "https://upload.wikimedia.org/wikipedia/commons/thumb/e/e0/SNice.svg/220px-SNice.svg.png";

cont.appendChild(img);