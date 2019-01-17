'use strict';
require('dotenv').config();
const express = require('express');
const mysql = require('mysql');
const path = require('path');
const app = express();
const PORT = 3000;

app.use('/static', express.static('static'));
app.use(express.json());
app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'main.html'));
});

const mySQLConnection = mysql.createConnection({
  multipleStatements: true,
  user: process.env.DB_USERNAME,
  password: process.env.DB_PASSWORD,
  port: 3306,
  database: process.env.DB_DATABASE
});

let sqlQuestions = 'SELECT * from questions';

mySQLConnection.connect((err) => {
  if (err) {
    console.log(err);
    return;
  }
  console.log('connection established');
});

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'index.html'));
});

app.get('/game', (req, res) => {
  mySQLConnection.query(sqlQuestions, (err, data) => {
    if (err) {
      console.log(err.message);
      res.status(500).json({
        error: 'Internal server error'
      });
      return;
    }
    
    let randomQuestionID = data[Math.floor(Math.random() * data.length)].id;
    let sqlGame = `SELECT * FROM questions INNER JOIN answers ON questions.id = answers.question_id WHERE questions.id = ${randomQuestionID};`
    mySQLConnection.query(sqlGame, (err, data) => {
      if (err) {
        console.log(err.message);
        res.status(500).json({
          error: 'Internal server error'
        });
        return;
      }
      res.json(data);
    });
  });
});

app.get('/questions', (req, res) => {
  mySQLConnection.query(sqlQuestions, (err, data) => {
    if (err) {
      console.log(err.message);
      res.status(500).json({
        error: 'Internal server error'
      });
      return;
    }
    res.json(data);
  });
});

app.post('/questions', (req, res) => {
  const { answer } = req.body;
  let sqlCheckAnswer = `SELECT * FROM questions INNER JOIN answers ON questions.id = answers.question_id WHERE answer = '${answer}'`;
  console.log(answer);

  mySQLConnection.queryquery(sqlCheckAnswer, (err, data) => {
    console.log(data[0].is_correct)
    if (err) {
      console.log(err.message);
      res.status(500).json({
        error: 'Internal server error'
      });
      return;
    }
    if (data[0].is_correct === 1) {
      console.log('correct!');
      res.json({
        message: "correct!"
      });
    }
    if (data[0].is_correct ===0) {
      console.log('incorrect');
      res.json({
        message: "incorrect"
      });
    }
  });
});

app.delete('/questions/:id', (req, res) => {
  let deleteID = req.params.body;
  let deleteSQL = `DELETE question FROM questions INNER JOIN answers ON questions.id = answers.question_id WHERE questions.id = ${deleteID};`
});

app.listen(PORT, () => { console.log(`App is listening on port: ${PORT}`); });