# CodeAlpha CGPA Calculator

A simple C++ based CGPA Calculator developed as part of the CodeAlpha C++ Programming Internship.

## Features

- Takes the number of courses as input
- Accepts course names
- Accepts grades
- Accepts credit hours
- Calculates total credits
- Calculates total grade points
- Calculates final CGPA
- Supports grades A, B, C, D and F
- Simple console-based interface

## Grade System

| Grade | Grade Point |
|-------|-------------|
| A     | 4.0         |
| B     | 3.0         |
| C     | 2.0         |
| D     | 1.0         |
| F     | 0.0         |

## Formula

CGPA is calculated using:

CGPA = Total Grade Points / Total Credit Hours

Where:

Total Grade Points = Grade Point × Credit Hours

## Technologies Used

- C++
- Basic Programming
- Loops
- Conditional Statements
- Variables
- Arithmetic Operations

## How to Run

Compile the program:

g++ CGPACalculator.cpp -o CGPACalculator

Run the program:

./CGPACalculator

## Project Structure

CodeAlpha_CGPACalculator/

├── CGPACalculator.cpp
└── README.md
