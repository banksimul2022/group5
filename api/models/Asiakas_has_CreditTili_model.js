const db = require('../database');

const Asiakas_has_CreditTili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where Asiakas_Tunnus=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from Asiakas_has_CreditTili', callback);
  },
  add: function(Asiakas_has_CreditTili, callback) {
    return db.query(
      'insert into Asiakas_has_CreditTili (Asiakas_Tunnus,CreditTili_tilinnumero) values(?,?)',
      [Asiakas_has_CreditTili.Asiakas_Tunnus, Asiakas_has_CreditTili.CreditTili_tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where Asiakas_Tunnus=?', [id], callback);
  },
  update: function(id, Asiakas_has_CreditTili, callback) {
    return db.query(
      'update Asiakas_has_CreditTili set Asiakas_Tunnus=?, CreditTili_tilinnumero, where Asiakas_Tunnus=?',
      [Asiakas_has_CreditTili.Asiakas_Tunnus, Asiakas_has_CreditTili.Asiakas_has_CreditTili,id],
      callback
    );
  }
};
module.exports = Asiakas_has_CreditTili;