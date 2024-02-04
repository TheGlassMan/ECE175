#include <stdio.h>
//Enter your phone number: 2345769854
//two three four five seven six nine eight five four


int main() {
    long long number;
    int digit = 1;
    int iteration = 1; //iteration is number of times it loops
    int failsafe = 1; //this is to ensure the loop does not go more than the regular phone number length
    scanf("%lld", &number);

    //convert number to text
    while (failsafe <= 10){
        if (number <= 9999999999)
        {
            digit = number / (1000000000 / iteration);
            switch (digit)
            {

                case 0:
                    printf("zero ");
                    break;
                case 1:
                    printf("one ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 7:
                    printf("seven ");
                    break;

                case 8:
                    printf("eight ");
                    break;

                case 9:
                    printf("nine ");
                    break;

                case 10:
                    printf("ten ");
                    break;

                default:
                    break;


            }
            number = number % (1000000000 / iteration);
            iteration*=10;
            failsafe++;

        }
    }


    printf("\n");
    return 0;
}
