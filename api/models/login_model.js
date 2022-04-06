const db = require('../database');

const login={
  checkPIN: function(Kortinnumero, callback) {
      return db.query('SELECT PIN FROM kortti WHERE Kortinnumero = ?',[Kortinnumero], callback); 
    }
};
          
module.exports = login;