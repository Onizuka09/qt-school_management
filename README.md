# Table of content
- Overview
- Technologies Used
- Features
- Student Module
- Teacher Module  
- Installation
- ToDO

## Overview:
This is a school management project that provides student and teachers with diffrent functionalities that manages student and teachers profiles.

the Project was built using the Qt framework, featuring a database for storing and managing teacher and student data. The project consists of three main modules:
- Student Module
- Teacher Module
- Realtime Chart Update 

## Technologies Used: 
-qt 6.3.2  (c++) 
-Qt Creator 
-Mysql and phpMyadmin (for database configuration )   

## Features
- Student Module
- Teacher Module
- Real time Chart update 

## Student Module:
In this Module, a student can: 
- Login and logout 
- Create a new account, delete account
- update account  
- view class time table
- view classmates
- view teachers 
![App Screenshot](app_pictures/studentModuleGIF.gif)

## Teacher Module 
In this Module, a teacher can: 
- Login and logout 
- Create a new account, delete account 
- view his students 
![App Screenshot](app_pictures/TeacherModuleGIF.gif)

## Installation
 
1- You have to install the qt creator and qt6 from this link: [https://www.qt.io/download]

or you can install qt from source ( follow this video [https://www.youtube.com/watch?v=2qsR8Dw8uzA])

2- clone this repository 
`https://github.com/Onizuka09/qt-school_management.git `

3- you can run this program via:

- the qt-creator by importing this project folder to qt. 
- from terminal follwing this steps (you need make for this):  

1- run  `Qt_INSATLLATION_PATH/ gcc_64/bin/qmake qt-school_management.pro` 

2- a new build directory will be created along side a makefile too 
just run `make -j 4`.

->This command will build the whole project and should output the excutable called `qt-school_management`

3- run the excutbale `./qt-school_management`     

## ToDO 
- Use pop up notifcations
- Complete Teacher Module 
- Enhance database 

