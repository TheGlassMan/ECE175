/*
 * Ernesto Martinez
 * ECE TUE & THR 12:30 - 1:45
 * 17.2 Homework 1, P2: Input and formatted output: House real estate summary
 * 1/16/2024
 */
#include <stdio.h>

int main(void) {
    int currentPrice;
    int lastMonthsPrice;
    int changePrice;
    double monthMortgage;

    scanf("%d", &currentPrice);
    scanf("%d", &lastMonthsPrice);

    printf("This house is $%d. ", currentPrice);
    //calculates the change in price
    changePrice = currentPrice - lastMonthsPrice;
    printf("The change is $%d since last month.\n", changePrice);
    //estimates the monthly mortgage
    monthMortgage = (currentPrice * 0.051) / 12;
    printf("The estimated monthly mortgage is $%lf.\n", monthMortgage);


    return 0;
}
