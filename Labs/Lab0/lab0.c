#include<stdio.h>
// Example of printing variables with the printf function
int main(void)
{
    int x; // declaration of an integer
    float y; // declaration of a float
    char c; // declaration of a char
    x = 125; // initialization
    y = 3.14159; // initialization
    c = 'a'; // initialization
    printf("Printing an integer number:%d\n", x); // integer
    printf("Printing a float number:%f\n",y); // real
    printf("Printing a character:%c\n",c); // char
    printf("You can also print message prompts\n");
    printf("Integer:%d\tFloat:%.1f\n",x, y); // printing tabs
    printf("Two decimals:%4.2f\nThree decimals:%6.3f\n",y,2*y);

    return(0);
}