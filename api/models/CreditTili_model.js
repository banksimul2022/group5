const db = require('../database');

const CreditTili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where Tilinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from CreditTili', callback);
  },
  add: function(CreditTili, callback) {
    return db.query(
      'insert into CreditTili (Velka,Tilinnumero) values(?,?)',
      [CreditTili.Velka, CreditTili.Tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where Tilinnumero=?', [id], callback);
  },
  update: function(id, CreditTili, callback) {
    return db.query(
      'update CreditTili set Velka=?, Tilinnumero=?, where Tilinnumero=?',
      [CreditTili.Velka, CreditTili.Tilinnumero,id],
      callback
    );
  }
};
module.exports = CreditTili;