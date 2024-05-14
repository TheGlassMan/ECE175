#include <stdio.h>
#include<stdbool.h>
#define SIZE 9

void readSudoku(int x[][SIZE], FILE *inp);
void printSudoku(int x[][SIZE]);
bool checkSudoku(int x[][SIZE]);

int main(void){

    int sudoku[SIZE][SIZE], num; // sudoku is a two dimensional array that holds all the values of the board
    FILE *inp;

    inp = fopen("sudoku1.txt", "r");

    if (inp == NULL){
        return -1;
    }
    else{
        readSudoku(sudoku, inp);
        printSudoku(sudoku);
        if (checkSudoku(sudoku)){
            printf("This is a valid sudoku puzzle\n");
        }
        else{
            printf("This is not a valid sudoku puzzle\n");
        }


    }
    fclose(inp);
}

void readSudoku(int x[][SIZE], FILE *inp){ // reads a sudoku file into array x
    int num;
    for (int i=0; i< SIZE; i++){
        for (int j = 0; j < SIZE; j++)
        {
            fscanf(inp, "%d", &num);
            x[i][j] = num;

        }

    }
}

void printSudoku(int x[][SIZE]){ // prints a soduko board
    int counterCol = 0, counterRow = 0;
    for (int i = 0; i < SIZE; i++)
    {
        counterCol = 0;
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", x[i][j]);
            counterCol++;
            if (counterCol % 3 == 0 && counterCol != 9){
                printf("| ");
            }
        }
        counterRow++;
        if (counterRow % 3 == 0 && counterRow != 9){
            printf("\n");
            printf("---------------------");
        }
        printf("\n");
    }

}

bool checkSudoku(int x[][SIZE]){ // returns true if x is a valid sudoku boards and false otherwise
    bool seen[SIZE + 1];
    //this checks the rows
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE + 1; j++)
        {
            seen[j] = false;
        }
        for (int j = 0; j < SIZE; j++)
        {
            int num = x[i][j];
            if (seen[num]){
                return false;
            }
            seen[num] = true;
        }


    }
    // this checks the columns where j is used as columns bc i didnt want to switch i and j roles in the for loops :p
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE + 1; j++)
        {
            seen[j] = false;
        }
        for (int j = 0; j < SIZE; j++)
        {
            int num = x[j][i];
            if (seen[num]){
                return false;
            }
            seen[num] = true;
        }


    }


}





