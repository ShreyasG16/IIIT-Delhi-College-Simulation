# IIIT-Delhi Administrative Structure Simulation
--------------------------------------------------

## Project Description
----------------------
This project models the administrative structure of IIIT-Delhi based on the information available on the institute's website (https://www.iiitd.ac.in/people/administration). It includes classes representing various administrative roles, such as deans, associate deans, and departments. The program allows users to fetch contact details (room numbers, telephone numbers, and email addresses) of administrative staff by providing their names.

## Building the Project
--------------------------

This project uses a Makefile for compiling the sources. It provides two build modes:

Debug mode: Compiles the program with debug symbols for easier debugging (-g flag).
Optimized mode: Compiles the program with optimizations for performance (-O2 flag).

Step 1: Navigate to Question 1 if not in this directory : cd "Question 1"
Step 2: Build both debug and optimized version : make
Step 3: Run : ./question1_debug.exe ./question1_optimized.exe
Step 4: make clean

## Input Format
----------------
The program prompts the user to enter the name of the person whose details need to be fetched.

## Acknowledgments
-------------------
The project uses the following external resources:
- IIIT-Delhi administration webpage (https://www.iiitd.ac.in/people/administration) for extracting administrative structure data.
- https://youtu.be/i_5pvt7ag7E?si=LNeG-YS5U0qp7_dV
- https://git-scm.com/doc
- Claude
