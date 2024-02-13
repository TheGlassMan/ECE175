//working on seperate IDE
#include <stdio.h>
#include <math.h>

int i, j, k, l;
int inputElement, electrons, elecNum, elecNum2;
char letter1,letter2,letter3,letter4;

int main()
{
    printf("Enter in atomic number:");
    scanf("%d", &inputElement);
    electrons = inputElement;
    if (electrons < 0 || electrons > 118)
    {
        printf("Number is outside the range of atomic numbers.");
        return 0;
    }
    else{

        printf("The orbitals for element #%d are: \n", inputElement);


        for ( i = 1; i <= 4; i++)
        {
            for ( j = 1; j <= i && electrons > 0; j++)
            {
                switch (i)
                {
                    case 1:
                        if (electrons - 2 >= 0){
                            elecNum = 2;
                            letter1 = 's';
                            electrons-=2;
                        }
                        else{
                            elecNum = 1;
                            letter1 = 's';
                            electrons-=2;
                        }
                        break;
                    case 2:
                        if (electrons - 8 >= 0)
                        {
                            elecNum = 2;
                            letter1 = 's';
                            electrons-=4;
                            printf("%d%c%d ", i, letter1, elecNum);
                            elecNum = 6;
                            letter1 = 'p';
                        }
                        else if (electrons - 9 >= 0){
                            break;
                        }

                        else {
                            elecNum = 2;
                            letter1 = 's';
                            printf("%d%c%d ", i, letter1, elecNum);
                            elecNum = electrons - 2;
                            letter1 = 'p';
                            break;
                        }


                        break;
                    case 3:
                        if (electrons - 8 >= 0)
                        {
                            elecNum = 2;
                            letter1 = 's';
                            electrons-=4;
                            printf("%d%c%d ", i, letter1, elecNum);
                            elecNum = 6;
                            letter1 = 'p';
                        }
                        else {
                            elecNum = 2;
                            letter1 = 's';
                            printf("%d%c%d ", i, letter1, elecNum);
                            elecNum = electrons - 2;
                            letter1 = 'p';
                            break;
                        }
                        break;
                    case 4:
                        /* code */
                        break;

                    default:
                        printf("\n");
                        break;
                }

                printf("%d%c%d\n", i, letter1, elecNum);
            }

        }

        for (k = 1; k <= 3; k++)
        {
            for (l = 1; l <= 4 && electrons != 0; l++)
            {
                electrons-=32;
            }
            printf("\n");
        }
    }

    return 0;
}
