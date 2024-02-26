#include <stdio.h>
#include <math.h>

long int IntToBinary(int integerValue){
    long int binaryValue = 0;
    long int binvalue = 0;
    int n = 0; // counts how mnay times we loop and what 1's or 10's or 100's etc we are in
    long int finalBin = 0; // our final number to print and return

    while (integerValue > 0)
    {

        binaryValue = integerValue % 2;
        finalBin = pow(10,n) * binaryValue + finalBin; // after debating realzied we should stick with the psuedocode and then do this to convert the opposite numbers like 011 to 110
        integerValue = integerValue / 2;               // did this but thinking of 0 ones + 1 tens + 1 hundreds == 110
        n++;
    }
    printf("%ld", finalBin);

    return finalBin;

}

int main() {
    int x;
   scanf("%d", &x);

   IntToBinary(x);
   printf("\n");

}
