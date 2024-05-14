#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char s[]); //function that reverses a string

int main() {
    char s[101];
    char *token;
    int length, start = 0;
    fgets(s, sizeof(s), stdin);
    length = strlen(s);
    s[strcspn(s, "\n")] = '\0'; //scans for null key
    token = strtok(s, " "); // splits string into "tokens"
    while (token != NULL){
        reverse(token);
        printf("%s ", token); // since we have multiple tokens to reverse that is why we print in a loop
        token = strtok(NULL, " ");
    }
    return 0;
}

void reverse(char s[]){
    int i, j = 0;
    char temp;
    int length = strlen(s);
    for (i = 0; i < length / 2; i++){
        temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}