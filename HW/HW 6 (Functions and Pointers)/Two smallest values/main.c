#include<stdio.h>
void smallestInt(FILE *inp, int *pmin1, int *pmin2);

int main(void){
    int min1 = 0, min2 = 0;

    FILE *inp = NULL;
    inp = fopen("data.txt", "r");
    if(inp == NULL){
        printf("File DNE");
    }
    else{

        smallestInt(inp, &min1, &min2);
        printf("Smallest number:%d\n", min1);
        printf("Second smallest number:%d\n", min2);
    }



    fclose(inp);
}

void smallestInt(FILE *inp, int *pmin1, int *pmin2){
    int num;
    while (fscanf(inp,"%d", &num) == 1){
        if (num < *pmin1){
            *pmin2 = *pmin1;
            *pmin1 = num;
        }
        else if(num < *pmin2){
            *pmin2 = num;
        }


    }
}
