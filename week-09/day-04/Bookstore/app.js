'use strict'

const express = require('express');
const app = express();
const path = require('path');
const PORT = 3000;
const mysql = require('mysql');

app.use(express.json());
app.use('/static', express.static('static'));

const connection = mysql.createConnection({
  port: 3306,
  user: 'root',
  password: 'password',
  database: 'bookstore'
});

app.get('/', (req, res) => {
  res.sendFile(path.join(__dirname, 'index.html'));
});

app.get('/books', (req, res) => {

  let sql = 'SELECT book_name AS title, aut_name AS author, cate_descrip AS category, pub_name AS publisher, book_price AS price FROM book_mast INNER JOIN author ON book_mast.aut_id = author.aut_id INNER JOIN publisher ON book_mast.pub_id = publisher.pub_id INNER JOIN category ON book_mast.cate_id = category.cate_id '

  sql += ' WHERE book_name is not null';

  console.log(req.query);

  if (req.query.author != null) {

    let authFilter = req.query.author;

    sql += " AND aut_name like '%" + authFilter + "%'";

    console.log(authFilter);
  }


  if (req.query.title != null) {
    let titleFilter = req.query.title;

    sql += " AND book_name like '%" + titleFilter + "%'";

    console.log(titleFilter);
  }

  if (req.query.category != null) {
    let categoryFilter = req.query.category;

    sql += " AND cate_descrip like '%" + categoryFilter + "%'";

    console.log(categoryFilter);
  }

  if (req.query.publisher != null) {
    let publisherFilter = req.query.publisher;

    sql += " AND pub_name like '%" + publisherFilter + "%'";

    console.log(publisherFilter);
  }

  if (req.query.plt != null) {
    let pltFilter = req.query.plt;

    sql += " AND book_price < ' " + pltFilter + "'";

    console.log(pltFilter);
  }

  if (req.query.pgt != null) {
    let pgtFilter = req.query.pgt;

    sql += " AND book_price > ' " + pgtFilter + "'";

    console.log(pgtFilter);
  }

  console.log(sql);

  connection.query(sql, (err, data) => {
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

// app.get('/params', (req, res) => {

//   console.log(req.url);
//   console.log(req.params);
//   console.log(req.query);

//   res.send("Params " + req.query.par1);

// });




app.listen(PORT, () => {
  console.log(`Listening on port ${PORT}`);
});

//SELECT book_name AS title, aut_name AS author, cate_descrip AS category, pub_name AS publisher, book_price AS price FROM book_mast INNER JOIN author ON book_mast.aut_id = author.aut_id INNER JOIN publisher ON book_mast.pub_id = publisher.pub_id INNER JOIN category ON book_mast.cate_id = category.cate_id;