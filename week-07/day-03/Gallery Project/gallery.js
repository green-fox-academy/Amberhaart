let smallPictures = document.querySelectorAll('.smallPicture');

let bigPicture = document.querySelector('.bigPicture');

const leftButton = document.querySelector('.leftButton');
const rightButton = document.querySelector('.rightButton');

let id = 0;
let idEnd = smallPictures.length-1;

console.log(idEnd);

rightButton.onclick = () => {


    if (id >= smallPictures.length) {
        bigPicture.setAttribute('src', smallPictures[0].getAttribute('src'));

        id = 1;

        console.log("Current ID: ", id);

    } else {

        bigPicture.setAttribute('src', smallPictures[id].getAttribute('src'));

        id = id - 1 + 2;

        console.log("Current ID: ", id);
    }
}

leftButton.onclick = () => {
    if (id <= 0) {
        bigPicture.setAttribute('src', smallPictures[idEnd].getAttribute('src'));

        id = idEnd;

        console.log("Current ID: ", id);

    } else {

        id = id - 1;

        bigPicture.setAttribute('src', smallPictures[id].getAttribute('src'));

        console.log("Current ID: ", id);
    }
}