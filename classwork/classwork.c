#include <stdio.h>

int main(){
    double fahrenheit;
    double celsius;
    printf("Enter fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    printf("This is your temp in celsius: %lf", celsius);
    return(0);

}
