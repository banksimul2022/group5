const db = require('../database');

const asiakas = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where Tunnus=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (Tunnus,Etunimi,Sukunimi,Lahiosoite,Puhelin) values(?,?,?,?,?)',
      [asiakas.Tunnus, asiakas.Etunimi, asiakas.Sukunimi, asiakas.Lahiosoite, asiakas.Puhelin],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where Tunnus=?', [id], callback);
  },
  update: function(id, asiakas, callback) {
    return db.query(
      'update asiakas set Tunnus=?, Etunimi=?, Sukunimi=?, Lahiosoite=?, Puhelin=?, where Tunnus=?',
      [asiakas.Tunnus, asiakas.Etunimi, asiakas.Sukunimi, asiakas.Lahiosoite, asiakas.Puhelin,id],
      callback
    );
  }
};
module.exports = asiakas;