# HW6 Assignments/Explanations

------

## Problem 1: Distance Converter

------

Develop a C program that receives as input a distance value, d, in inches and converts it to yards, feet, and inches (1 yard = 3 feet, 1 foot = 12 inches). Your program should:

1) Read a set of distances from a file called dist.txt
2) Use a function called distConverter to break distance to yards, feet, and inches.
3) Print the conversion result on screen in the main function (not within the distConverter function)

The distConverter function prototype should be:<br/>
`void distConverter(int d, int *p y, int *p f, int *p i)`

**Sample Output** dist.txt file: 130 19 4 12 337 162 0

| Inches | Yards | Feet | Inches |
| ------ | ----- | ---- | ------ |
| 130    | 3     | 1    | 10     |
| 19     | 0     | 1    | 7      |
| 4      | 0     | 0    | 4      |
| 12     | 0     | 1    | 0      |
| 337    | 9     | 1    | 1      |
| 162    | 4     | 1    | 6      |
| 0      | 0     | 0    | 0      |

## Problem 2: Two smallest values

------

A file called data.txt contains a set of integer numbers. Find the two smallest numbers on that file. Your code should use the following function that returns the two smallest integers.

`void smallestInt(FILE *inp, int *pmin1, int *pmin2);`

**Sample Output** <br/>
data.txt: 130 19 4 12 337 162 794 311 529 166 -8 26 654 289 6 -12 <br/>
Smallest number:-12 <br/>
Second smallest number:-8 <br/>
