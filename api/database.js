const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'bankdb_user',
  password: 'bankpass',
  database: 'bankdb'
});
module.exports = connection;