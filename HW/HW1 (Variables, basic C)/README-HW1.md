# HW1 Assignments/Explanations


## Problem 1: Phone Number Breakdown


Consider a long long integer representing a 10-digit phone number given by the user via the keyboard. Break down the input to a phone-friendly format represented by the area code (in parenthesis), followed by the prefix, and line number using the format (800) 555-1212.

Ex: If the input is:

`8005551212`

the output is:

`(800) 555-1212`

## Problem 2: House real estate summary

------

Sites like Zillow get input about house prices from a database and provide nice summaries for readers. Write a program with two inputs, current price and last month's price (both integers). Then, output a summary listing the price, the change since last month, and the estimated monthly mortgage computed as (currentPrice * 0.051) / 12 (Note: Output directly as a floating-point value. Do not store in a variable.).

Ex: If the input is:
`200000 210000`

the output is:

`This house is $200000. The change is $-10000 since last month.
The estimated monthly mortgage is $850.000000.`


## Problem 3: Musical note frequencies

------

On a piano, a key has a frequency, say f0. Each higher key (black or white) has a frequency of f0 * rn, where n is the distance (number of keys) from that key, and r is 2(1/12). Given an initial key frequency (an integer), output that frequency and the next 4 higher key frequencies.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

`440.0`

the output is:

`440.00 466.16 493.88 523.25 554.37`
