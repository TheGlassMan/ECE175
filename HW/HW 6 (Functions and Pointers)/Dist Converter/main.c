/* Sample Output :
inches:   yards feet inches
130   :     3     1     10
19    :     0     1     7
4     :     0     0     4
12    :     0     1     0
337   :     9     1     1
162   :     4     1     6
0     :     0     0     0
*/


#include<stdio.h>
void distConverter(int d, int *p_y, int *p_f, int *p_i);

int main(void){
    int d;
    int y, f, i; // going to be what pointers will point to and change value
    FILE *dist = NULL;
    dist = fopen("dist.txt", "r");
    if (dist == NULL){
        printf("File DNE");
    }
    else{
        printf("Distance(Inches):\tYard: Feet: Inches:\n");
        while (fscanf(dist, "%d", &d) == 1){ //since we can't do prints in the function bc pointers duh we do the loop in here :)
            distConverter(d, &y, &f, &i);
            printf("%d\t\t\t%d\t %d\t %d\t\n",d, y, f, i);
        }
    }
    fclose(dist); // after loop is done we close file
    return 0;
}

void distConverter(int d, int *p_y, int *p_f, int *p_i){
    *p_i = 0;
    *p_f = 0;
    *p_y = 0;
    *p_y = d / 36;
    if (d % 36 >= 12)
    {
        *p_i = d % 36 - 12;
        *p_f = d % 36 / 12;
    }
    else{
        *p_i = d % 36;
    }
}
