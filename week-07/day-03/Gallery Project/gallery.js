let smallPictures = document.querySelectorAll('.smallPicture');

let bigPicture = document.querySelector('.bigPicture');

const leftButton = document.querySelector('.leftButton');
const rightButton = document.querySelector('.rightButton');

rightButton.onclick = () => {

    let tempPicture = bigPicture.getAttribute('src');
    let id = bigPicture.getAttribute('id');


    if (id >= smallPictures.length) {
        bigPicture.setAttribute('src', smallPictures[0].getAttribute('src'));
        bigPicture.setAttribute('id', '0');

        smallPictures.forEach(e => {
            e.setAttribute('id', e.getAttribute('id')+parseInt(1));
        });

        smallPictures.forEach(e => {
            console.log(e.getAttribute('id'));
        });
            console.log("Big Picture ID: ", bigPicture.getAttribute('id'));
        
    } else {

        bigPicture.setAttribute('src', smallPictures[id].getAttribute('src'));
        bigPicture.setAttribute('id', smallPictures[id].getAttribute('id'));
        smallPictures[id].setAttribute('src', tempPicture);
        smallPictures[id].setAttribute('id', id);

        smallPictures.forEach(e => {
            console.log(e.getAttribute('id'));
        });
        console.log("Big Picture ID: ", bigPicture.getAttribute('id'));
    }
}

leftButton.onclick = () => {
    let tempPicture = bigPicture.getAttribute('src');
    let id = bigPicture.getAttribute('id');
    bigPicture.setAttribute('src', smallPictures[id].getAttribute('src'));
    bigPicture.setAttribute('id', smallPictures[id].getAttribute('id'));

    // smallPictures[id].setAttribute('src', tempPicture);
    // smallPictures[id].setAttribute('id', id);
}