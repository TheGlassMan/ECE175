# HW8 Assignments/Explanations

------

## Problem 1: Sudoku

------

Sudoku is a number-placement puzzle played on a 9-by-9 grid. The objective is to fill the grid with digits so that each column, each row, and each of the nine 3-by-3 subgrids that compose the grid contain all of the digits from 1 to 9. For complete Sudoku rules, check [Wikipedia]{http://en.wikipedia.org/wiki/Sudoku}.

Write a program that reads a sudoku file as input and checks if the file is a proper solution to the Sudoku puzzle. Your program should use a function called checkBoard which returns true if the board is a valid sudoku board and zero otherwise.

`void readSudoku(int x[][9], FILE *inp); // reads a sudoku board from a file pointed by inp` <br />
`void printSudoku(int x[][9]); // prints a sudoku board in the format shown below`  <br />
`bool checkSudoku(int x[][9]); // checks if this is a valid sudoku board and returns true or false` <br />
An example of a Sudoku file (with a correct puzzle) is given below.

<p>
1 2 3 4 5 6 7 8 9 <br />
4 5 6 7 8 9 1 2 3 <br />
7 8 9 1 2 3 4 5 6 <br />
2 3 4 5 6 7 8 9 1 <br />
5 6 7 8 9 1 2 3 4 <br />
8 9 1 2 3 4 5 6 7 <br />
3 4 5 6 7 8 9 1 2 <br />
6 7 8 9 1 2 3 4 5 <br />
9 1 2 3 4 5 6 7 8 <br />

Sample Output

1 2 3 | 4 5 6 | 7 8 9 <br />
4 5 6 | 7 8 9 | 1 2 3 <br />
7 8 9 | 1 2 3 | 4 5 6 <br />
————————- <br />
2 3 4 | 5 6 7 | 8 9 1 <br />
5 6 7 | 8 9 1 | 2 3 4 <br />
8 9 1 | 2 3 4 | 5 6 7 <br />
————————- <br />
3 4 5 | 6 7 8 | 9 1 2 <br />
6 7 8 | 9 1 2 | 3 4 5 <br />
9 1 2 | 3 4 5 | 6 7 8 <br />

This is a valid sudoku puzzle.
</p>