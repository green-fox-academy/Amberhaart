const king = document.querySelector('#b325');
console.log(king);

const businessLamp = document.querySelectorAll('.big');
businessLamp.forEach(e => {
    console.log(e);
});

const conceitedKing = document.querySelectorAll('#b325, .b326');
conceitedKing.forEach(e => {
    alert(e.textContent);
});

const noBusiness = document.querySelectorAll('div');
noBusiness.forEach(e => {
    console.log(e);
});