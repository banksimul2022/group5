const db = require('../database');

const Asiakas_has_DebitTili = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where Asiakas_Tunnus=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from Asiakas_has_DebitTili', callback);
  },
  add: function(Asiakas_has_DebitTili, callback) {
    return db.query(
      'insert into Asiakas_has_DebitTili (Asiakas_Tunnus,DebitTili_tilinnumero) values(?,?)',
      [Asiakas_has_DebitTili.Asiakas_Tunnus, Asiakas_has_DebitTili.DebitTili_tilinnumero],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where Asiakas_Tunnus=?', [id], callback);
  },
  update: function(id, Asiakas_has_DebitTili, callback) {
    return db.query(
      'update Asiakas_has_DebitTili set Asiakas_Tunnus=?, DebitTili_tilinnumero where Asiakas_Tunnus=?',
      [Asiakas_has_DebitTili.Asiakas_Tunnus, Asiakas_has_DebitTili.Asiakas_has_DebitTili,id],
      callback
    );
  }
};
module.exports = Asiakas_has_DebitTili;