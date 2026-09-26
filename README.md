# structured-programming-practice

**Student Name:** Atuhaire Ian  
**Course:** CSC1101 Structured Programming  
**Submission Date:** September 29, 2026

## Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9a, page 132.
What the program does: Displays a simple greeting and some biodata about me using single printf statements.
Concepts used: printf, escape sequences (\n)
How it works: The program calls printf multiple times to print rows of characters containing that information.

## Exercise 2 - Input-Process-Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16, page 134.
What the program does: Takes two numbers from the user, computes their sum and product, and displays the results.
Concepts used: printf, escape sequences (\n), variables, scanf, arithmetic operators(+,*,-,/,%)
How it works: Prompts the user for integer inputs using scanf(), calculates the result into dedicated variables, and prints them out.

## Exercise 3 - Desicions
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22, page 134.
What the program does: Reads an integer from the user and determines and displays whether it is odd or even, using the remainder operator.
Concepts used: printf, escape sequences (\n),if, else if, else, %,relational operators
How it works: The program divides the number by 2 using `%`, which gives the remainder of that division. Since any multiple of 2 leaves a remainder of 0, the program checks `number % 2 == 0` — if true, the number is even; otherwise (any nonzero remainder), it's odd.
