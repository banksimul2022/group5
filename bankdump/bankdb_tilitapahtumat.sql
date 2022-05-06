CREATE DATABASE  IF NOT EXISTS `bankdb` /*!40100 DEFAULT CHARACTER SET utf8 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `bankdb`;
-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bankdb
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `id_tapahtuma` int NOT NULL AUTO_INCREMENT,
  `Tilinnumero` int NOT NULL,
  `Tapahtuma` varchar(45) NOT NULL,
  `Pvm` datetime NOT NULL,
  `Summa` int NOT NULL,
  `CreditTili_Tilinnumero` int DEFAULT NULL,
  `DebitTili_Tilinnumero` int NOT NULL,
  PRIMARY KEY (`id_tapahtuma`),
  KEY `fk_Tilitapahtumat_Credit-tili1_idx` (`CreditTili_Tilinnumero`),
  KEY `fk_Tilitapahtumat_Debit-tili1_idx` (`DebitTili_Tilinnumero`),
  CONSTRAINT `fk_Tilitapahtumat_Credit-tili1` FOREIGN KEY (`CreditTili_Tilinnumero`) REFERENCES `credittili` (`Tilinnumero`),
  CONSTRAINT `fk_Tilitapahtumat_Debit-tili1` FOREIGN KEY (`DebitTili_Tilinnumero`) REFERENCES `debittili` (`Tilinnumero`)
) ENGINE=InnoDB AUTO_INCREMENT=228 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (223,1,'Talletus','2022-05-05 23:11:02',40,1,1),(224,1,'Credit_Nosto','2022-05-05 23:11:08',60,1,1),(225,1,'Nosto','2022-05-05 23:11:08',60,1,1),(226,1,'Credit_Nosto','2022-05-05 23:12:51',40,1,1),(227,1,'Nosto','2022-05-05 23:12:51',40,1,1);
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-05-06  9:52:59
