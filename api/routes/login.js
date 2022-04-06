const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');

router.post('/', 
  function(request, response) {
    if(request.body.Kortinnumero && request.body.PIN){
      const Kortinnumero = request.body.Kortinnumero;
      const PIN = request.body.PIN;

        login.checkPIN(Kortinnumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult) {
                if(compareResult) {
                  console.log("succes");
                  const token = generateAccessToken({ Kortinnumero: Kortinnumero });
                  response.send(token);
                }
                else {
                    console.log("wrong PIN");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("Kortinnumero or PIN missing");
      response.send(false);
    }
  }
  
);

function generateAccessToken(Kortinnumero) {
  dotenv.config();
  return jwt.sign(Kortinnumero, process.env.MY_TOKEN, { expiresIn: '1800s' });
}

module.exports=router;