# HW9 Assignments/Explanations

------

## Problem 1: Telecommunication packets

------
In our internet infrastructure, each server is responsible for recording incoming telecommunication packets in an array as they arrive, ensuring that they are ordered according to their respective time fields within the array. Now, let's consider a scenario where an application needs to locate and sort these telecommunications packets by their timestamps across three servers.

To achieve this, write a program that takes the input from three Timestamp files (each with 9 ordered timestamps) and outputs the merged and sorted packets based on their time order. Your program should use a function called printTimestamps to display the timestamps.

`void readTimestamps(int x[], int xsize, FILE *inp);` <br />
`void mergeTimestamps(int x[], int xsize, int y[], int ysize, int z[], int zsize);` <br />
`void printTimestamps(int x[], int xsize);` <br />

An example of Timestamp files is given below.

timestamp1:

1 3 6 9 13 16 20 25 39

timestamp2:

2 11 21 22 23 24 25 30 35

timestamp3:

3 5 10 24 30 32 33 34 35

Sample Output

1,2,3,3,5,6,9,10,11,13,16,20,21,22,23,24,24,25,25,30,30,32,33,34,35,35,39. 