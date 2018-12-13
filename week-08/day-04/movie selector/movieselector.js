let result = document.querySelector('.result');
const genre = document.querySelector('#movie_genres');
const movie = document.querySelector('#movies');
let film1 = document.querySelector('[value=film1]')
let film2 = document.querySelector('[value=film2]')
let film3 = document.querySelector('[value=film3]')

function genreChosen() {
    if (genre.value != "") {
        movie.disabled = false;
    }
}

function filmsByGenre() {
    if (genre.value === "scifi") {
        film1.textContent = "Moon";
        film2.textContent = "2001 Space odessy";
        film3.textContent = "Contact";
    } else if (genre.value === "drama") {
        film1.textContent = "Darkest hour";
        film2.textContent = "There will be blood";
        film3.textContent = "American beauty";
    } else if (genre.value === "comedy") {
        film1.textContent = "Airplane!";
        film2.textContent = "Deadpool";
        film3.textContent = "Wayne's World";
    }
}

function setResult() {
    if (movie.value === "") {
        result.textContent = "-";
    } else if (movie.value === "film1") {
        result.textContent = film1.textContent;
    } else if (movie.value === "film2") {
        result.textContent = film2.textContent;
    } else if (movie.value === "film3") {
        result.textContent = film3.textContent;
    }
}

genre.addEventListener('change', genreChosen);
genre.addEventListener('change', filmsByGenre);
movie.addEventListener('change', setResult);