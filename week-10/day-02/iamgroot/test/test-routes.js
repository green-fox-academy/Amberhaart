'use strict';

const test = require('tape');
const request = require('supertest');
const app = require('../routes');

test('groot endpoint', (t) => {
    request(app)
        .get('/groot?message=somemessage')
        .expect(200)
        .expect('Content-Type', /json/)
        .end((err,res) => {
            if (err) throw err;
            t.same(res.body, {"received": "somemessage", "translated": "I am Groot"}, 'with query test');
            t.end();
        });
});