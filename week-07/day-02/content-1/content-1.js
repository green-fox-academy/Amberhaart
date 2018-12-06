const classes = document.querySelectorAll('p');
const animals = document.querySelector('.animals');

/*classes.forEach(e => {
    e.textContent = animals.textContent;
  });   */

classes.forEach(e => {
    e.innerHTML = animals.innerHTML;
  });