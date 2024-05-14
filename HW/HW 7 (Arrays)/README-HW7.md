# HW7 Assignments/Explanations

------

## Problem 1: Bins and Balls

------

Assume that there are 1,000 bins numbered from 1 to 1000 and 100 players numbered from 1 to 100. Initially, all bins are empty. A player with id **x** visits all bins that are a multiple of her id. The player will throw a ball in a bin that she visits if the bin is empty, or pick up a ball if the bin has at least one ball. After all 100 players complete their turn, we want to find the number and ids of the empty bins. Write a C program that mimics this experiment and prints a) the number of empty bins, and b) the ids of the empty bins.

## Problem 2: Hangman

------

Write an interactive program that plays a game of hangman. Store the characters of the word to be guessed in an array of type char (you can initialize your character array at declaration). Words are seven letters long. Initially, the program displays the length of the word to be guessed. This is in the form of successive stars (see example). The player guesses letters belonging to the secret word one by one. After each guess, the letters that have been guessed and the number of wrong guesses are displayed on the screen. Your program should terminate when either the entire word is guessed or 4 incorrect guesses have been attempted.

Your code shall use the following function: <br/>
`bool letterCheck(char secret[], char found[], int len, char c, int *times);` <br/>

The function receives as input array secret that holds the secret word, array found that holds the letters that have been found thus far, the length of the secret word, and the input character from the user. The function returns if the letter given by the user was found in array secret (via the boolean return variable), updates array found, and also returns the number of times the letter was found via pointer times <br/>

Test your program for the words: abandon, annoyed, finance, aerobic, inferno, infancy.

Sample output:

Hi, let’s play hangman. The secret word is: <br/>
_*******_ <br />
Guess a letter:t <br />
Letter t is not part of the secret word, You have 3 attempts left. <br />
_*******_ <br />
Guess a letter:a <br />
Letter a exists 2 times in the secret word, You have 3 attempts left. <br />
a*_a_**** <br />
Guess a letter:e <br />
Letter e is not part of the secret word, you have 2 attempts left. 
