//using external IDE for debugging
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

bool letterCheck(char secret[], char found[], int len, char c, int *times);
int main() {
    srand(time(NULL)); // used time so that we can have "true" random had to look back at chapter 2 for this one :)
    int tries = 4;
    int length = 7;
    int timesFound = 0;
    char hiddenLetters[7] = {'_', '_', '_', '_', '_', '_', '_'};
    char foundLetters[7] = {'_', '_', '_', '_', '_', '_', '_'};
    char inputC;
    int randNum = rand() % 6 + 1; // range of 1 - 6
    switch (randNum) // this is how the word is chosen
    {
        case 1:
            hiddenLetters[0] = 'a';
            hiddenLetters[1] = 'b';
            hiddenLetters[2] = 'a';
            hiddenLetters[3] = 'n';
            hiddenLetters[4] = 'd';
            hiddenLetters[5] = 'o';
            hiddenLetters[6] = 'n';
            break;
        case 2:
            hiddenLetters[0] = 'a';
            hiddenLetters[1] = 'n';
            hiddenLetters[2] = 'n';
            hiddenLetters[3] = 'o';
            hiddenLetters[4] = 'y';
            hiddenLetters[5] = 'e';
            hiddenLetters[6] = 'd';
            break;
        case 3:
            hiddenLetters[0] = 'f';
            hiddenLetters[1] = 'i';
            hiddenLetters[2] = 'n';
            hiddenLetters[3] = 'a';
            hiddenLetters[4] = 'n';
            hiddenLetters[5] = 'c';
            hiddenLetters[6] = 'e';
            break;
        case 4:
            hiddenLetters[0] = 'a';
            hiddenLetters[1] = 'e';
            hiddenLetters[2] = 'r';
            hiddenLetters[3] = 'o';
            hiddenLetters[4] = 'b';
            hiddenLetters[5] = 'i';
            hiddenLetters[6] = 'c';
            break;
        case 5:
            hiddenLetters[0] = 'i';
            hiddenLetters[1] = 'n';
            hiddenLetters[2] = 'f';
            hiddenLetters[3] = 'e';
            hiddenLetters[4] = 'r';
            hiddenLetters[5] = 'n';
            hiddenLetters[6] = 'o';
            break;
        case 6:
            hiddenLetters[0] = 'i';
            hiddenLetters[1] = 'n';
            hiddenLetters[2] = 'f';
            hiddenLetters[3] = 'a';
            hiddenLetters[4] = 'n';
            hiddenLetters[5] = 'c';
            hiddenLetters[6] = 'y';
            break;
    }
    // this loop will go on as long as you have tries or you have not solved the word
    printf("Guess a letter:\n");
    while (tries > 0 && (foundLetters[0] == '_' || foundLetters[1] == '_' || foundLetters[2] == '_' || foundLetters[3] == '_' || foundLetters[4] == '_' || foundLetters[5] == '_' || foundLetters[6] == '_')){
        scanf(" %c", &inputC);
        letterCheck(hiddenLetters, foundLetters, length, inputC, &timesFound);
        if(letterCheck(hiddenLetters, foundLetters, length, inputC, &timesFound)){ // if we got a letter right this goes (we just put function in if-statement since it bool function)
            printf("Letter %c exists %d times in the secret word, You have %d attempts left.\n" , inputC, timesFound, tries);
        }
        else{
            tries--;
            printf("Letter %c is not part of the secret word, You have %d attempts left.\n", inputC, tries);
        }
        printf("%c%c%c%c%c%c%c\n", foundLetters[0], foundLetters[1], foundLetters[2], foundLetters[3], foundLetters[4], foundLetters[5], foundLetters[6]);
    }
    if (tries == 0) // if tries is 0 than we lost so it prompts the losing text
    {
        printf("You lost the word was: %c%c%c%c%c%c%c", hiddenLetters[0], hiddenLetters[1], hiddenLetters[2], hiddenLetters[3], hiddenLetters[4], hiddenLetters[5], hiddenLetters[6]);
    }
    else{
        printf("YOU WON!!"); // obvisously if we had tries remaining we had to have won
    }

    return 0;
}

bool letterCheck(char secret[], char found[], int len, char c, int *times) {
    bool letterFound = false; // resets back to false
    *times = 0; // sets counter of letter back to zero
    for (int i = 0; i < len; i++) {
        if (secret[i] == c) { // checks ever 7 letters to see if input matches
            found[i] = secret[i]; // sets found letter to be the letter we got right
            (*times)++; // counts how many times we see letter
            letterFound = true;
        }
    }
    return letterFound; // returns function as true or false
}

