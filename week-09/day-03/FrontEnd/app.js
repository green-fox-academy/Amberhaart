const express = require('express');
const path = require('path');

const app = express();
const PORT = 8080;

app.use('/assets', express.static('assets'));

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'index.html'));
});

app.get('/doubling', (req, res) => {
  if (req.query.input) {
    res.send({
      "received": req.query.input,
      "result": req.query.input * 2
    })
  } else {
    res.send({
      "error": "Please provide an input!"
    })
  }
});

app.get('/greeter', (req, res) => {
  if (req.query.name && req.query.title) {
    res.send({
      "welcome_message": `Oh, hi there ${req.query.name}, my dear ${req.query.title}!`
    })
  } else if (req.query.name) {
    res.send({
      "error": "Please provide a title!"
    })
  } else {
    res.send({
      "error": "Please provide a name!"
    })
  }
});

app.get('/appenda/:appendable?', (req, res) => {
  if (req.params.appendable) {
    res.json({
      "appended": `${req.params.appendable}a`
    })
  } else
    req.status(404).send();
});

const factorial = (par) => {
  let factNum = 1;
  for (let i = par; i > 0; i--) {
    fac *= i;
  }
  return factNum;
}

const sum = (par) => {
  let sumNum = 0;
  for (let i = 0; i <= par; i++) {
    sumNum += i;
  }
  return sumNum;
}

app.post('/dountil/:action'), (req, res) => {
  let until = req.body.until;
  if (req.params.action === 'factor') {
    res.send({
      "result": factorial(until)
    })
  } else if (req.params.action === 'sum') {
    res.send({
      "result": sum(until)
    })
  }
  else {
    res.send ({
      "error": "Please provide a number" 
    })
  }
}

app.listen(PORT, () => {
  console.log(`The server is up and running on ${PORT}`);
});