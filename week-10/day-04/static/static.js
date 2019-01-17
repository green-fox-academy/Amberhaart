'use strict';

const divQuestion = document.querySelector('.question');
const divContainer = document.querySelector('.container');
const buttons = document.querySelectorAll('button');
const answer1 = document.querySelector('.answer1');
const answer2 = document.querySelector('.answer2');
const answer3 = document.querySelector('.answer3');
const answer4 = document.querySelector('.answer4');
const result = document.querySelector('.result');

let counter = 1;

let addToCounter = () => {
  result.innerHTML = counter++;
}

let giveQuestion = () => {
  const xhr = new XMLHttpRequest();
  xhr.open('GET', '/game');
  xhr.onload = () => {
    if (xhr.status === 200) {
      const res = JSON.parse(xhr.responseText);
      divQuestion.textContent = res[0].question;
      buttons.forEach((e, i) => {
        buttons[i].textContent = res[i].answer;
        buttons[i].value = res[i].is_correct;
      });
    }
  }
  xhr.send();
}

giveQuestion();

divContainer.addEventListener('click', (e) => {
  console.log(e.target.textContent)
  let answertoSend = e.target.textContent;
  console.log(e.target.value);
  if (e.target.value === '1' ) {
    addToCounter();
  }
  const xhr = new XMLHttpRequest();
  xhr.open('POST', '/questions');
  xhr.setRequestHeader('Content-Type', 'application/json');
  xhr.send(JSON.stringify({
    answer: answertoSend,
  }));

  giveQuestion();

});

