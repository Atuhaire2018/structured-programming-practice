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

## Exercise 4 - Basic-loop
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.7(a), page 224.
what the program does: Displays all the odd integers from 1 to 13.
Concepts used: 'for' loop, integer variables, 'printf'.
How it works: The loop starts at 'n = 1' and continues while 'n <= 13', adding 2 to 'n' after each iteration instead of 1. Starting at an odd number and stepping by 2 means every value the loop variable takes is odd, so the loop naturally skips all even numbers without needing an 'if' check.

## Exercise 5 - Loop_calculation
source: Deitel & Deitel, C How to program, 9th Edition, Chapter 4, Exercise 4.11, page 225.
what the program does: Calculates and prints the sum of all multiples of 7 from 1 to 100, printing each multiple as it's found.
Concepts used: `for` loop, accumulator variable, arithmetic operators.
How it works: The loop starts at `i = 7` and adds 7 each time, stopping once `i` exceeds 100. On every iteration, the current multiple is printed and also added to `sum`, which accumulates the running total. After the loop ends, the final sum is printed.

## Exercise 6 - loop_input
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.19, page 178.
What the program does: Repeatedly reads a loan's principal, interest rate and term (in days), then calculates and displays the simple interest for each loan, stopping when the user enters -1 as the principal.
Concepts used: `while` loop, sentinel-controlled iteration, `scanf` inside a loop, arithmetic operators.
How it works: The formula used is `interest = principal * rate * days / 365`, since `rate` is assumed to be an annual rate. The principal is read once before the loop (a priming read). While it isn't -1, the program reads the rate and days, calculates and prints the interest, then reads the next principal at the bottom of the loop — this re-read is what lets the sentinel value be checked again each time the loop repeats.

## Exercise 7 - loop decision
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.17, page 225.
what the program does: Analyzes the credit status of three customers after a company cuts every customer's credit limit in half. For each customer, it reads the account number, the credit limit before the recession and the current balance, then calculates and prints the new credit limit and reports whether the balance exceeds it. It also counts how many customers are over their new limit.
concept used: `for` loop, `if...else` inside a loop, counter variable, arithmetic operators, `scanf` and `printf`.
How it works: The `for` loop runs exactly three times, once per customer. Inside each iteration, the program reads the three inputs and calculates the new limit with `current_limit = limit / 2`. An `if...else` then compares `balance` against `current_limit`: if the balance is higher, the program prints a warning and adds 1 to the `limit` counter; otherwise it reports that the account is within its limit. 

## Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.19, page 226.
What the program does: An online retailer sells five products at fixed prices. The user repeatedly enters a product number and the quantity sold; the program looks up the price with a switch statement, adds the line total to a running total, and stops when 0 is entered, then prints the total retail value of all sales.
Concepts used: switch multiple-selection statement, sentinel-controlled while loop, continue, accumulator variable.
How it works: A priming read gets the first product number. While it isn't 0, a switch picks the price for the given product (or, for an invalid number, prints an error and uses continue to skip straight to the next read). Otherwise the quantity is read, `price * quantity` is added to `total`, and the next product number is read at the bottom of the loop. After the loop ends, the total is printed.
