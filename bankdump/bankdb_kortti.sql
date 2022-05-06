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
-- Table structure for table `kortti`
--

DROP TABLE IF EXISTS `kortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kortti` (
  `Kortinnumero` int NOT NULL,
  `PIN` varchar(255) NOT NULL,
  `Asiakas_Tunnus` int NOT NULL,
  `DebitTili_Tilinnumero` int NOT NULL,
  `CreditTili_Tilinnumero` int DEFAULT NULL,
  PRIMARY KEY (`Kortinnumero`),
  KEY `fk_Kortti_Asiakas1_idx` (`Asiakas_Tunnus`),
  KEY `fk_Kortti_Debit-tili1_idx` (`DebitTili_Tilinnumero`),
  KEY `fk_Kortti_Credit-tili1_idx` (`CreditTili_Tilinnumero`),
  CONSTRAINT `fk_Kortti_Asiakas1` FOREIGN KEY (`Asiakas_Tunnus`) REFERENCES `asiakas` (`Tunnus`),
  CONSTRAINT `fk_Kortti_Credit-tili1` FOREIGN KEY (`CreditTili_Tilinnumero`) REFERENCES `credittili` (`Tilinnumero`),
  CONSTRAINT `fk_Kortti_Debit-tili1` FOREIGN KEY (`DebitTili_Tilinnumero`) REFERENCES `debittili` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kortti`
--

LOCK TABLES `kortti` WRITE;
/*!40000 ALTER TABLE `kortti` DISABLE KEYS */;
INSERT INTO `kortti` VALUES (1,'$2a$10$YQtNgQI2wcp5FHVu9tdpLehnu.9G4j4qMOuonjF7lfm82zsoOxldG',1,1,1),(2,'$2a$10$zQ6HE.BGhlc.k74woX85k.ecKvLj4V3PBaQyZNGfrBdnY5eOlo.Te',2,2,2);
/*!40000 ALTER TABLE `kortti` ENABLE KEYS */;
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
