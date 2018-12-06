const placeholder = document.querySelectorAll('li');
const list = ['apple', 'banana', 'cat', 'dog'];

placeholder.forEach((e, i) => {
    e.textContent = list[i];
  });