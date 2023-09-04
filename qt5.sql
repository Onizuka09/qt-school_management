-- phpMyAdmin SQL Dump
-- version 5.1.1deb5ubuntu1
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Sep 04, 2023 at 08:58 PM
-- Server version: 8.0.34-0ubuntu0.22.04.1
-- PHP Version: 8.1.2-1ubuntu2.14

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `qt5`
--

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `id` int NOT NULL,
  `name` varchar(25) NOT NULL,
  `surname` varchar(25) NOT NULL,
  `password` varchar(25) NOT NULL,
  `age` int NOT NULL,
  `class` int NOT NULL,
  `grade` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`id`, `name`, `surname`, `password`, `age`, `class`, `grade`) VALUES
(1, 'moktar', 'sellami', '123', 26, 1, 20),
(2, 'mohamed', 'hamoudi', '123', 0, 0, 0),
(3, 'mohamed', 'sellami', '1245', 0, 0, 0),
(4, 'john', 'fiber', '124', 0, 0, 0),
(5, 'test2', 'test2', '555', 22, 2, 12),
(6, 'oussema', 'oussema', '123a', 21, 3, 20),
(8, 'DALI', 'fafa', '123', 231, 2, 23);

-- --------------------------------------------------------

--
-- Table structure for table `subjects_table`
--

CREATE TABLE `subjects_table` (
  `id` int NOT NULL,
  `subject` varchar(255) NOT NULL,
  `duration` int NOT NULL,
  `classroom` varchar(100) NOT NULL,
  `level` int NOT NULL,
  `days` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `subjects_table`
--

INSERT INTO `subjects_table` (`id`, `subject`, `duration`, `classroom`, `level`, `days`) VALUES
(1, 'fench', 1, 'A102', 2, ''),
(2, 'arabic', 1, 'A103', 1, ''),
(3, 'MATH', 2, 'A104', 1, ''),
(4, 'physics', 2, 'A109', 1, ''),
(5, 'Advanced Math', 60, 'A104', 3, 'Monday,Wednesday,Friday'),
(6, 'Literature', 45, 'A123', 3, 'Tuesday,Thursday'),
(7, 'Computer Science', 75, 'A100', 3, 'Monday,Wednesday'),
(8, 'Economics', 60, 'A102', 3, 'Tuesday,Thursday');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `subjects_table`
--
ALTER TABLE `subjects_table`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `student`
--
ALTER TABLE `student`
  MODIFY `id` int NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `subjects_table`
--
ALTER TABLE `subjects_table`
  MODIFY `id` int NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
