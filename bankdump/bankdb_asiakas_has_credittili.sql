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
-- Table structure for table `asiakas_has_credittili`
--

DROP TABLE IF EXISTS `asiakas_has_credittili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas_has_credittili` (
  `Asiakas_Tunnus` int NOT NULL,
  `CreditTili_Tilinnumero` int NOT NULL,
  PRIMARY KEY (`Asiakas_Tunnus`,`CreditTili_Tilinnumero`),
  KEY `fk_Asiakas_has_Credit-tili_Credit-tili1_idx` (`CreditTili_Tilinnumero`),
  KEY `fk_Asiakas_has_Credit-tili_Asiakas1_idx` (`Asiakas_Tunnus`),
  CONSTRAINT `fk_Asiakas_has_Credit-tili_Asiakas1` FOREIGN KEY (`Asiakas_Tunnus`) REFERENCES `asiakas` (`Tunnus`),
  CONSTRAINT `fk_Asiakas_has_Credit-tili_Credit-tili1` FOREIGN KEY (`CreditTili_Tilinnumero`) REFERENCES `credittili` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas_has_credittili`
--

LOCK TABLES `asiakas_has_credittili` WRITE;
/*!40000 ALTER TABLE `asiakas_has_credittili` DISABLE KEYS */;
INSERT INTO `asiakas_has_credittili` VALUES (1,1),(2,2);
/*!40000 ALTER TABLE `asiakas_has_credittili` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-05-06  9:52:58
