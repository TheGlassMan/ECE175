/* Ernesto Martinez
 * ECE 175 12:30 - 1:45 TUE & THR
 * 1/11/24
 * HW1 Convert From Seconds*/
#include <stdio.h>

int main(void) {
    int seconds;
    int minutes;
    int hours;

    scanf("%d", &seconds);
    hours = seconds / 3600; // divides into hours
    printf("Hours: %d\n", hours);
    minutes = (seconds % 3600) / 60; //divides seconds by 3600 and grabs the remainder to be divided by 60
    printf("Minutes: %d\n", minutes);
    seconds = seconds % 60; // grabs the remainder and outputs that
    printf("Seconds: %d\n", seconds);

    return 0;
}