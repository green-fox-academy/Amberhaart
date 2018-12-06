let shovelKnight = document.querySelector('img');
console.log(shovelKnight.getAttribute('src'));
shovelKnight.setAttribute('src', 'https://media.nintendo.com/nintendo/bin/NcoFL07aaJ_3V3kEgsErLkS2HuBG_zKb/JdHFaXji5mPYikEOHsMu1OU7iUTt8UiL.png');

let link = document.querySelector('a');

link.setAttribute('href', 'https://www.greenfoxacademy.com');

let badButton = document.querySelector('.this-one');
badButton.disabled = true;
badButton.textContent = "Don't click me!";