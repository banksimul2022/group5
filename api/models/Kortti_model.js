const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where Kortinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (Kortinnumero,PIN,Asiakas_Tunnus,DebitTili_Tilinnumero,CreditTili_Tilinnumero) values(?,?,?,?,?)',
      [kortti.Kortinnumero, kortti.PIN, kortti.Asiakas_Tunnus, kortti.DebitTili_Tilinnumero, kortti.CreditTili_Tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where Kortinnumero=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    return db.query(
      'update kortti set Kortinnumero=?, PIN=?, Asiakas_Tunnus=?, DebitTili_Tilinnumero=?, CreditTili_Tilinnumero=?, where Kortinnumero=?',
      [kortti.Kortinnumero, kortti.PIN, kortti.Asiakas_Tunnus, kortti.DebitTili_Tilinnumero, kortti.CreditTili_Tilinnumero,id],
      callback
    );
  }
};
module.exports = kortti;