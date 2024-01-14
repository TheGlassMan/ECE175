/*
 * Ernesto Martinez
 * ECE 175 TUE & THR 12:30 - 1:45
 * 1/14/2024
 *HW 1 Volume and area of cylinder
 */
#include <math.h>
#include <stdio.h>

int main() {
    double cylinderRadius;
    double cylinderHeight;
    double cylinderVolume;
    double cylinderArea;

    //printf("Please enter radius of cylinder:"); was using these for test purposes
    scanf("%lf", &cylinderRadius); // asks for input of cylinder radius
    //printf("Please enter height of cylinder: ");
    scanf("%lf", &cylinderHeight); // prompts inpur for height
    cylinderVolume = M_PI * pow(cylinderRadius, 2) * cylinderHeight; // uses equation of volume to calculate and assigns cylinderVolume that number
    printf("Volume: %0.1lf cubic inches\n", cylinderVolume);
    cylinderArea = ((2 * M_PI * cylinderRadius *cylinderHeight ) + (2 * M_PI * pow(cylinderRadius,2))); // uses equation of surface area to calculate and assigns cylinderArea that number
    printf("Surface area: %0.1lf square inches\n", cylinderArea);

    return 0;
}
