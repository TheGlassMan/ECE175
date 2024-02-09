#include <stdio.h>

int main() {

    char sq1, sq2, sq3, sq4, sq5, sq6, sq7, sq8, sq9;
    sq1 = sq2 = sq3 = sq4 = sq5 = sq6 = sq7 = sq8 = sq9 = ' ';
    char Player1 = 'X', winner;
    int PlayerMove, move;
    char currentsq = ' ';

    printf("+---+---+---+\n");
    printf("| %c | %c | %c |\n" ,sq1, sq2, sq3);
    printf("| %c | %c | %c |\n" ,sq4, sq5, sq6);
    printf("| %c | %c | %c |\n" ,sq7, sq8, sq9);
    while (winner != Player1) {
        for (move = 1; move < 9; move++) {
            printf("Player %c move:", Player1);
            scanf("%d", &PlayerMove);
            if (PlayerMove <= 9 && PlayerMove >= 1) {
                switch (PlayerMove) {
                    case 1:
                        currentsq = sq1;
                        break;
                    case 2:
                        currentsq = sq2;
                        break;
                    case 3:
                        currentsq = sq3;
                        break;
                    case 4:
                        currentsq = sq4;
                        break;
                    case 5:
                        currentsq = sq5;
                        break;
                    case 6:
                        currentsq = sq6;
                        break;
                    case 7:
                        currentsq = sq7;
                        break;
                    case 8:
                        currentsq = sq8;
                        break;
                    case 9:
                        currentsq = sq9;
                        break;
                }
            } else {
                printf("Invalid Move. Try again");
                move--;
                Player1 = 'O';
            }
            if (currentsq == ' ') {
                switch (PlayerMove) {
                    case 1:
                        sq1 = Player1;
                        break;
                    case 2:
                        sq2 = Player1;
                        break;
                    case 3:
                        sq3 = Player1;
                        break;
                    case 4:
                        sq4 = Player1;
                        break;
                    case 5:
                        sq5 = Player1;
                        break;
                    case 6:
                        sq6 = Player1;
                        break;
                    case 7:
                        sq7 = Player1;
                        break;
                    case 8:
                        sq8 = Player1;
                        break;
                    case 9:
                        sq9 = Player1;
                        break;

                }
                if (sq1 != ' ' && sq1 == sq2 && sq2 == sq3 || sq4 != ' ' && sq4 == sq5 && sq5 == sq6 ||
                    sq7 != ' ' && sq7 == sq8 && sq8 == sq9) {

                    winner = Player1;
                    printf("+---+---+---+\n");
                    printf("| %c | %c | %c |\n", sq1, sq2, sq3);
                    printf("| %c | %c | %c |\n", sq4, sq5, sq6);
                    printf("| %c | %c | %c |\n", sq7, sq8, sq9);
                    printf("+---+---+---+\n");
                    printf("Winner is player %c \n", winner);
                    break;
                }

                else if (sq1 != ' ' && sq1 == sq5 && sq5 == sq9 || sq7 != ' ' && sq7 == sq5 && sq5 == sq3) {

                    winner = Player1;
                    printf("+---+---+---+\n");
                    printf("| %c | %c | %c |\n", sq1, sq2, sq3);
                    printf("| %c | %c | %c |\n", sq4, sq5, sq6);
                    printf("| %c | %c | %c |\n", sq7, sq8, sq9);
                    printf("+---+---+---+\n");
                    printf("Winner is player %c \n", winner);
                    break;
                }

                else if (sq1 != ' ' && sq1 == sq4 && sq4 == sq7 || sq2 != ' ' && sq2 == sq5 && sq5 == sq8 ||
                    sq3 != ' ' && sq3 == sq6 && sq6 == sq9) {

                    winner = Player1;

                    printf("+---+---+---+\n");
                    printf("| %c | %c | %c |\n", sq1, sq2, sq3);
                    printf("| %c | %c | %c |\n", sq4, sq5, sq6);
                    printf("| %c | %c | %c |\n", sq7, sq8, sq9);
                    printf("+---+---+---+\n");
                    printf("Winner is player %c \n", winner);
                    break;
                }


                if (Player1 == 'X') {
                    Player1 = 'O';
                } else {
                    Player1 = 'X';
                }
            } else {
                printf("Invalid Move. Try again");
                move--;
            }
            printf("+---+---+---+\n");
            printf("| %c | %c | %c |\n", sq1, sq2, sq3);
            printf("| %c | %c | %c |\n", sq4, sq5, sq6);
            printf("| %c | %c | %c |\n", sq7, sq8, sq9);
        }
    }


    return 0;
}