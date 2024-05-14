# HW3 Assignments/Explanations

-----



## Problem 1: Factorial Calculation

------

Write a program that calculates the factorial of a positive integer n.

You will prompt the user for a number and then output the factorial.

E.g.

Input number: **4**

4! is 24.

## Problem 2: Perfect Numbers

------

A positive integer is said to be a perfect number if it equals the sum of its positive divisors (excluding the number itself). As an example, 6 is a perfect number because its divisors, 1, 2, and 3 sums up to 6.

The first four perfect numbers are 6, 28, 496, 8128.

Write a C program that prompts the user to enter a number and checks if the number is perfect. Your program should run interactively until the user quits. Try to minimize the program execution time by using the least number of iterations for finding the divisors of the user’s input. Record and report the number of iterations executed for checking if a number is perfect. The valid range of inputs is restricted to any number between 100 and 10,000 (including the boundaries).

**Sample Output:** <br />
Enter a number between 100 and 10,000:1 <br />
This number is outside the accepted range. <br />
Do you want to continue (y/n)?y <br />
Enter a number between 100 and 10,000:400 <br />
Number 400 is not perfect <br />
Number of iterations:200 <br />
Do you want to continue (y/n)?y <br />
Enter a perfect number:496 <br />
Number 496 is perfect <br />
Number of iterations:248 <br />
Do you want to continue (y/n)?n <br />
Goodbye! <br />

## Problem 3: Number-to-text Converter

------

Implement an automated number-to-text conversion system for a phone company.

Prompt the user to input an integer and convert each digit to the appropriate text word. The integer can be of variable length, but no longer than 10 digits. Assume that no phone number starts with a zero. Do not use strings or any function from the string library.

**Sample Output:** <br />
Enter your phone number: 2345769854 <br />
two three four five seven six nine eight five four <br />
