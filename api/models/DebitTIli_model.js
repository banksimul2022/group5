const db = require('../database');

const DebitTili = {
  getById: function(id, callback) {
    return db.query('select * from DebitTili where Tilinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from DebitTili', callback);
  },
  add: function(DebitTili, callback) {
    return db.query(
      'insert into DebitTili (Saldo,Tilinnumero) values(?,?)',
      [DebitTili.Saldo, DebitTili.Tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from DebitTili where Tilinnumero=?', [id], callback);
  },
  update: function(id, DebitTili, callback) {
    return db.query(
      'update DebitTili set Saldo=?, Tilinnumero=? where Tilinnumero=?',
      [DebitTili.Saldo, DebitTili.Tilinnumero,id],
      callback
    );
  }
};
module.exports = DebitTili;