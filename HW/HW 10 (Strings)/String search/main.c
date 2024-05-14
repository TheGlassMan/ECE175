// Used a IDE of my own
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXLINE 1000
bool lineSearch(char c[], char t[]);


int main(void){
    char filename[100];
    char target[100];
    char line[1000];
    scanf("%s", filename); //asks for filename to be input
    scanf("%s", target);
    FILE *myfile = fopen(filename, "r");
    if (myfile == NULL){
        printf("This file DNE");
    }
    else{
        while (fgets(line, 1000, myfile) != NULL){
            if (lineSearch(line, target)){ //since this is bool we will do a loop until the start of target is found in each line
                printf("%s", line);
            }
        }
    }


    fclose(myfile);
    return (0);
}

bool lineSearch(char c[], char t[]){
    int i, j;
    for (i = 0; c[i] != '\0'; i++){ // loop breaks when we hit the null character meaning we hit the end of a line
        j = 0; // j will look letter by letter and check so we rest at zero everytime we finish a loop
        while (c[j + i] == t[j]){ // we do i bc we need to start at our starting index which is 'i'
            j++;
        }
        if(t[j] == '\0'){ // we went through the whole line and finished it
            return true;
        }
    }



    return false;
}
