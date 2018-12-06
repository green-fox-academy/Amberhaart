const par = document.querySelectorAll('p');

par.forEach(e => {
    console.log(e.classList.value);
});

if (par[3].classList.contains('dolphin')) {
    par[0].textContent = 'pear';
}

if (par[0].classList.contains('apple')) {
    par[2].textContent = 'dog';
}

par[0].classList.add('red');

par[1].style.borderRadius = "25px";
