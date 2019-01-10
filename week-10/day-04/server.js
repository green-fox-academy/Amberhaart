'use strict';
require('dotenv').config();
const express = require('express');
const mysql = require('mysql');
const path = require('path');
const app = express();
const PORT = 3000;

app.use('/assets', express.static('assets'));
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

app.get('/show', (req, res) => {
    let sql = "SELECT * from questions";
    mySQLConnection.query(sql, (err, data) => {
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


app.listen(PORT, () => { console.log(`App is listening on port: ${PORT}`); });