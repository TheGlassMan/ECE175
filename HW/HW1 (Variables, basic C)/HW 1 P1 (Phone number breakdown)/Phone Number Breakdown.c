/*
 * Ernesto Martinez
 * ECE 175 TUE & THR 12:30 - 1:45 PM
 * 17.1 Homework 1, P1: Phone number breakdown
 * 1/16/2024
 */
#include <stdio.h>

int main(void) {
    long long phoneNumber;
    long long areaCode;
    long long restOfNumber1;
    long long restOfNumber2;
// use 5203286266 as input
    scanf("%lld",  &phoneNumber);
    //printf("%lld\n", phoneNumber);
    //separates area code to be alone by abusing overflow
    areaCode = phoneNumber / 10000000;
    //grabs second part of phone number
    restOfNumber2 = phoneNumber % 10000;
    //grabs first half of phone number
    restOfNumber1 = (phoneNumber / 10000) % 1000;
    printf("(%lld)", areaCode);
    printf(" %lld", restOfNumber1);
    printf("-%lld\n", restOfNumber2);
    return 0;
}
