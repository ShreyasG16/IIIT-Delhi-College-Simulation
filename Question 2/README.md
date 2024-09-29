# IIIT-Delhi Academic Department Simulation
--------------------------------------------
This C++ project models the structure of academic departments with features like fetching room and telephone numbers for each member of a department. The project assumes a fixed structure with one administrative officer assisting the Head of the Department and five faculty members in each department with 4 normal member and 1 HoD.

This system processes the provided CSV data to simulate an academic department management system.

## Project Structure
--------------------
Question 2/
├── include/
│   ├── AdminStructure.h        # Header file for AdminStructure class
│   ├── Department.h            # Header file for Department class
│   ├── Member.h                # Header file for Member class
│   ├── Utils.h                 # Utility functions for data processing
├── src/
│   ├── AdminStructure.cpp      # Implementation of AdminStructure class
│   ├── Department.cpp          # Implementation of Department class
│   ├── Member.cpp              # Implementation of Member class
│   ├── Utils.cpp               # Utility functions implementation
├── data.csv                    # Input CSV data of department members
├── main.cpp                    # Main entry point of the program
├── Makefile                    # Makefile to build the project
└── README.md                   # Project documentation (this file)

## Explanation of Key Files
---------------------------
1. main.cpp: Contains the entry point for the program, initializes objects and processes input data.
2. AdminStructure.h/.cpp: Defines and implements the AdminStructure class responsible for handling administrative   staff details.
3. Department.h/.cpp: Defines and implements the Department class that models a department and holds the list of members.
4. Member.h/.cpp: Defines and implements the Member class that models each faculty member.
5. Utils.h/.cpp: Provides utility functions like reading from the CSV file and processing the data.

## Building the Project
--------------------------

This project uses a Makefile for compiling the sources. It provides two build modes:

Debug mode: Compiles the program with debug symbols for easier debugging (-g flag).
Optimized mode: Compiles the program with optimizations for performance (-O2 flag).

Step 1: Navigate to Question 2 if not in this directory : cd "Question 2"
Step 2: Build both debug and optimized version : make
Step 3: Run : ./question2_debug.exe ./question2_optimized.exe
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


