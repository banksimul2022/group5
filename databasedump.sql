-- MySQL dump 10.13  Distrib 8.0.28, for Win64 (x86_64)
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
-- Table structure for table `asiakas`
--

DROP TABLE IF EXISTS `asiakas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas` (
  `Tunnus` int NOT NULL,
  `Etunimi` varchar(45) NOT NULL,
  `Sukunimi` varchar(45) NOT NULL,
  `Lahiosoite` varchar(45) NOT NULL,
  `Puhelin` varchar(45) NOT NULL,
  PRIMARY KEY (`Tunnus`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
INSERT INTO `asiakas` VALUES (1,'kokko','okko','kokkola','4545454545'),(2,'mikko','kikko','mikkola','0404040404');
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

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
/*!40000 ALTER TABLE `asiakas_has_credittili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `asiakas_has_debittili`
--

DROP TABLE IF EXISTS `asiakas_has_debittili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas_has_debittili` (
  `Asiakas_Tunnus` int NOT NULL,
  `DebitTili_Tilinnumero` int NOT NULL,
  PRIMARY KEY (`Asiakas_Tunnus`,`DebitTili_Tilinnumero`),
  KEY `fk_Asiakas_has_Debit-tili_Debit-tili1_idx` (`DebitTili_Tilinnumero`),
  KEY `fk_Asiakas_has_Debit-tili_Asiakas1_idx` (`Asiakas_Tunnus`),
  CONSTRAINT `fk_Asiakas_has_Debit-tili_Asiakas1` FOREIGN KEY (`Asiakas_Tunnus`) REFERENCES `asiakas` (`Tunnus`),
  CONSTRAINT `fk_Asiakas_has_Debit-tili_Debit-tili1` FOREIGN KEY (`DebitTili_Tilinnumero`) REFERENCES `debittili` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas_has_debittili`
--

LOCK TABLES `asiakas_has_debittili` WRITE;
/*!40000 ALTER TABLE `asiakas_has_debittili` DISABLE KEYS */;
/*!40000 ALTER TABLE `asiakas_has_debittili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `credittili`
--

DROP TABLE IF EXISTS `credittili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `credittili` (
  `Velka` int NOT NULL,
  `Tilinnumero` int NOT NULL,
  PRIMARY KEY (`Tilinnumero`),
  UNIQUE KEY `Tilinnumero_UNIQUE` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `credittili`
--

LOCK TABLES `credittili` WRITE;
/*!40000 ALTER TABLE `credittili` DISABLE KEYS */;
INSERT INTO `credittili` VALUES (0,2222);
/*!40000 ALTER TABLE `credittili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `debittili`
--

DROP TABLE IF EXISTS `debittili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `debittili` (
  `Saldo` int NOT NULL,
  `Tilinnumero` int NOT NULL,
  PRIMARY KEY (`Tilinnumero`),
  UNIQUE KEY `Tilinnumero_UNIQUE` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `debittili`
--

LOCK TABLES `debittili` WRITE;
/*!40000 ALTER TABLE `debittili` DISABLE KEYS */;
INSERT INTO `debittili` VALUES (1500,1111);
/*!40000 ALTER TABLE `debittili` ENABLE KEYS */;
UNLOCK TABLES;

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
INSERT INTO `kortti` VALUES (1,'1212',1,1111,2222);
/*!40000 ALTER TABLE `kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `Tilinnumero` int NOT NULL,
  `Kortinnumero` int NOT NULL,
  `Pvm` datetime NOT NULL,
  `Tapahtuma` varchar(45) NOT NULL,
  `Summa` int NOT NULL,
  `CreditTili_Tilinnumero` int DEFAULT NULL,
  `DebitTili_Tilinnumero` int NOT NULL,
  PRIMARY KEY (`Tilinnumero`,`Kortinnumero`),
  KEY `fk_Tilitapahtumat_Credit-tili1_idx` (`CreditTili_Tilinnumero`),
  KEY `fk_Tilitapahtumat_Debit-tili1_idx` (`DebitTili_Tilinnumero`),
  CONSTRAINT `fk_Tilitapahtumat_Credit-tili1` FOREIGN KEY (`CreditTili_Tilinnumero`) REFERENCES `credittili` (`Tilinnumero`),
  CONSTRAINT `fk_Tilitapahtumat_Debit-tili1` FOREIGN KEY (`DebitTili_Tilinnumero`) REFERENCES `debittili` (`Tilinnumero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (1,1,'2022-04-04 00:00:00','Nosto',500,2222,1111);
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

-- Dump completed on 2022-04-04 13:57:14
