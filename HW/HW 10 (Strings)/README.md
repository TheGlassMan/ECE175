# HW10 Assignments/Explanations


## Problem 1: Reversed words in a sentence


Prompt the user to enter a sentence that does not exceed 100 characters. Print the sentence with all the words spelled backward. You can assume that the words of the sentence are separated by a single space. Your program should use a function called reverse that receives as input a string and reverses it. You should call reverse with only a single word, not with an entire line of words.

`void reverse(char x[]);`

**Sample Output** <br />
Enter a sentence: May the force be with you <br />
yaM eht ecrof eb htiw uoy

## Problem 2: String search


Develop a C program that searches a file for a given string. Your program should

- Ask the user to enter the file to be searched.
- Ask the user to enter the target string. The string can be longer than one word, but no longer than a line.
- Locate the target string in the file. Your program should be able to identify the target string as a part of another string. You are not allowed to call the strstr function for this part, you have to implement your own.
- Print the line number as well as the entire line for every match.

Your code should use the following function to look for a target string within a given string s. The function returns true if target is found in s. <br />
`bool lineSearch(char s[], char target[]);`
Sample output

File input:someText.txt <br />
Lorem Ipsum is simply dummy text of the printing and typesetting industry. <br />
Lorem Ipsum has been the industry’s standard dummy text ever since the 1500s, <br />
when an unknown printer took a galley of type and scrambled it to make a type specimen book. <br />
It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. <br />
It was popularized in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more <br />
recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. <br />

Target string: orem Ip <br />

Output: <br />
1 Lorem Ipsum is simply dummy text of the printing and typesetting industry. <br />
2 Lorem Ipsum has been the industry’s standard dummy text ever since the 1500s, <br />
5 It was popularized in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more <br />
6 recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum. <br />
