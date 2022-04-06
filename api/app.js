var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');
const jwt = require('jsonwebtoken');

var indexRouter = require('./routes/index');
var loginRouter = require('./routes/login');
var AsiakasRouter = require('./routes/Asiakas');
var TilitapahtumatRouter = require('./routes/Tilitapahtumat');
var CreditTiliRouter = require('./routes/CreditTili');
var DebitTiliRouter = require('./routes/DebitTili');
var Asiakas_has_CreditTiliRouter = require('./routes/Asiakas_has_CreditTili');
var Asiakas_has_DebitTiliRouter = require('./routes/Asiakas_has_DebitTili');
var KorttiRouter = require('./routes/Kortti');


var app = express();

app.use(helmet());
app.use(cors());
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/login', loginRouter);
app.use(authenticateToken);
app.use('/Asiakas', AsiakasRouter);
app.use('/Tilitapahtumat', TilitapahtumatRouter);
app.use('/CreditTili', CreditTiliRouter);
app.use('/DebitTili', DebitTiliRouter);
app.use('/Asiakas_has_CreditTili', Asiakas_has_CreditTiliRouter);
app.use('/Asiakas_has_DebitTili', Asiakas_has_DebitTiliRouter);
app.use('/Kortti', KorttiRouter);

function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
  
    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)
  
    jwt.verify(token, process.env.MY_TOKEN, (err, user => {
      console.log(err)
  
      if (err) return res.sendStatus(403)
  
      req.user = user
  
      next()
    })
  }


module.exports = app;
