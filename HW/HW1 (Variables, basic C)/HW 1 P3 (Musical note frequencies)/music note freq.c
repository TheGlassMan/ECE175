/*
 * Ernesto Martinez
 * ECE TUE & THR 12:30 - 1:45
 * 17.2 Homework 1, P3: Input and formatted output: House real estate summary
 * 1/16/2024
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double r = pow(2.0, 1.0/12.0);
    double n = 0; //  the distance (number of keys) from f0
    double f0;
    double fn;

    scanf("%lf", &f0);
    fn = f0 * pow(r,n);
    printf("%0.2lf ", fn);
    //adds one to n so we move one key
    n++;
    //uses same formula to shorthand
    fn = f0 * pow(r,n);
    printf("%0.2lf ", fn);
    n++;
    fn = f0 * pow(r,n);
    printf("%0.2lf ", fn);
    n++;
    fn = f0 * pow(r,n);
    printf("%0.2lf ", fn);
    n++;
    fn = f0 * pow(r,n);
    printf("%0.2lf\n", fn);
    return 0;
}
