const db = require('../database');

const tilitapahtumat = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where Tilinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (Tilinnumero,Kortinnumero,PVM,Tapahtuma,Summa,DebitTili_Tilinnumero,CreditTili_Tilinnumero) values(?,?,?,?,?,?,?)',
      [tilitapahtumat.Tilinnumero, tilitapahtumat.Kortinnumero, tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.DebitTili_Tilinnumero, tilitapahtumat.CreditTili_Tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where Tilinnumero=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set Tilinnumero=?, Kortinnumero=?, PVM=?, Tapahtuma=?, Summa=?, DebitTili_Tilinnumero=?, CreditTili_Tilinnumero=?, where Tilinnumero=?',
      [tilitapahtumat.Tilinnumero, tilitapahtumat.Kortinnumero, tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.DebitTili_Tilinnumero, tilitapahtumat.CreditTili_Tilinnumero,id],
      callback
    );
  }
};
module.exports = tilitapahtumat;