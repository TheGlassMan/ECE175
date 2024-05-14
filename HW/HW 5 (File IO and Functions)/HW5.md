# HW5 Assignments/Explanations

------

## Problem 1: Leap year - functions

------

A common year in the modern Gregorian Calendar consists of 365 days. In reality, Earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400; therefore, both 1700 and 1800 are not leap years

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines the number of days in February for that year.

Ex: If the input is:<br/>
`1712`

the output is:<br/>
`1712 has 29 days in February.`

Ex: If the input is:

`1913`

the output is:

`1913 has 28 days in February.`

## Problem 2: Convert to binary - functions

------

Write a program that takes in a positive integer as input and outputs its binary representation. For an integer x, the algorithm is:

`As long as x is greater than 0
Output x % 2 (the remainder is either 0 or 1)
x = x / 2`

Ex: If the input is:<br/>
`6`

the output is:<br/>
`110`

The program must define and call the following function. Define a function named IntToBinary that takes an int named integerValue as the parameter and returns a long int representing the integerValue in binary.  Please note that is it not a string, but a long int that represents the binary value.  For example, the returned value for an input of 6, would be 110 (One hundred and ten).