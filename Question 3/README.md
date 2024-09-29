# IIIT-Delhi Escalation Matrix Simulation
------------------------------------------

## Understanding the Hierarchy:
-----------------------------------

Each department has a defined hierarchy based on seniority, starting from lower-level officers to higher-level administrators, such as the registrar, deans, and directors. Complaints would initially be addressed by lower-level officers and then escalated upwards if unresolved. Here's an example structure:

Top-Level Positions: Director, Registrar
Mid-Level Positions: Deans (Student Affairs, Academics, IRD, etc.), Controllers
Low-Level Positions: Junior Officers, Technical Officers, Administrative Officers


## Matrix Representation:
--------------------------

Create a matrix that shows the sequence of escalation. If someone files a complaint, it first goes to a Junior Officer, then to a Dean or Administrative Officer, and finally to the Registrar or Director if unresolved.

Example of an escalation matrix based on positions:

 Level	        Position	                 Days Until Escalation
  1	       Junior Officer	                     1 - 3 Days
  2	       Administrative Officer / Dean	     4 - 6 Days
  3	       Registrar / Director	                 7+ Days


## Steps for Escalation:
------------------------

Initial Level: When a complaint is filed, it starts at the lowest relevant level, such as a Junior Officer or Technical Officer.

Escalation after 3 Days: If unresolved, the complaint moves to the next senior level, like an Administrative Officer or Dean.

Final Escalation: If still unresolved, it reaches the Registrar or Director for further action.

## Building the Project
--------------------------

This project uses a Makefile for compiling the sources. It provides two build modes:

Debug mode: Compiles the program with debug symbols for easier debugging (-g flag).
Optimized mode: Compiles the program with optimizations for performance (-O2 flag).

Step 1: Navigate to Question 3 if not in this directory : cd "Question 3"
Step 2: Build both debug and optimized version : make
Step 3: Run : ./question3_debug.exe ./question3_optimized.exe
Step 4: make clean

## Input Format
----------------
The program prompts the user to enter the subject of the problem and number of days passed since the complaint has been filed.

## Acknowledgments
-------------------
The project uses the following external resources:
- IIIT-Delhi administration webpage (https://www.iiitd.ac.in/people/administration) for extracting administrative structure data.
- https://youtu.be/i_5pvt7ag7E?si=LNeG-YS5U0qp7_dV
- https://git-scm.com/doc