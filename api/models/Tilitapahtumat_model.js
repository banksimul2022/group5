const db = require('../database');
//const { param } = require('../routes/Tilitapahtumat');


const tilitapahtumat = {

  debit_nosto: function(parameters, callback) {
    return db.query('CALL debit_nosto(?,?)', 
    [parameters.Tilinnumero, parameters.Summa], callback);
  },

  debit_talletus: function(parameters, callback) {
    return db.query('CALL debit_talletus(?,?)', 
    [parameters.Tilinnumero, parameters.Summa], callback);
  },

  credit_nosto: function(parameters, callback) {
    return db.query('CALL credit_nosto(?,?)', 
    [parameters.Tilinnumero, parameters.Summa], callback);
  },

  credit_maksu: function(parameters, callback) {
    return db.query('CALL credit_maksu(?,?)', 
    [parameters.Tilinnumero, parameters.Summa], callback);
  },

  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where Tilinnumero=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (Tilinnumero,Tapahtuma,PVM,Summa,DebitTili_Tilinnumero,CreditTili_Tilinnumero) values(?,?,?,?,?,?)',
      [tilitapahtumat.Tilinnumero, tilitapahtumat.Tapahtuma, tilitapahtumat.PVM, tilitapahtumat.Summa, tilitapahtumat.DebitTili_Tilinnumero, tilitapahtumat.CreditTili_Tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where Tilinnumero=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set Tilinnumero=?, Tapahtuma=?, PVM=?, Summa=?, DebitTili_Tilinnumero=?, CreditTili_Tilinnumero=? where Tilinnumero=?',
      [tilitapahtumat.Tilinnumero, tilitapahtumat.Tapahtuma, tilitapahtumat.PVM, tilitapahtumat.Summa, tilitapahtumat.DebitTili_Tilinnumero, tilitapahtumat.CreditTili_Tilinnumero,id],
      callback
    );
  }
};
module.exports = tilitapahtumat;