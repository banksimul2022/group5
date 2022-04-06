const db = require('../database');
const bcrypt = require('bcryptjs');
const saltRounds = 10;

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where Kortinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash) {
    return db.query(
      'insert into kortti (Kortinnumero,PIN,Asiakas_Tunnus,DebitTili_Tilinnumero,CreditTili_Tilinnumero) values(?,?,?,?,?)',
      [kortti.Kortinnumero, hash, kortti.Asiakas_Tunnus, kortti.DebitTili_Tilinnumero, kortti.CreditTili_Tilinnumero],
      callback
    );
    });
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where Kortinnumero=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash) {
    return db.query(
      'update kortti set Kortinnumero=?, PIN=?, Asiakas_Tunnus=?, DebitTili_Tilinnumero=?, CreditTili_Tilinnumero=?, where Kortinnumero=?',
      [kortti.Kortinnumero, hash, kortti.Asiakas_Tunnus, kortti.DebitTili_Tilinnumero, kortti.CreditTili_Tilinnumero,id],
      callback
    );
    });
  }
};
module.exports = kortti;