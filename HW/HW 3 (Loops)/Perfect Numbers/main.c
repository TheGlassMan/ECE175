//hello future grader I used an external IDE so if you see some weird
//copy paste that is why. I try my best to copy and paste the small changes I make so you
//see my progress but sometimes i get carried away debbugging in my own IDE and not the one here
#include <stdio.h>

int main() {
    int number, iteration, sum;
    char answer = 'y';

    while (answer == 'y' || answer == 'Y' || number - sum != 0) {
        iteration = 0;
        sum = 1;

        printf("Enter a number between 100 and 10,000:\n");
        scanf("%d", &number);
        // detects if user inputs too small of number or too big of number
        if (number < 100 || number > 10000) {
            printf("This number is outside the accepted range.\n");
            printf("Do you want to continue (y/n)?\n");
            scanf(" %c", &answer);
        // if user says anything else than y or Y code ends
            if (answer != 'y' && answer != 'Y') {
                printf("Goodbye!\n");
                return 0;
            }
        //breaks off the code just in case a no does work
            break;
        }
        
        
        else{
        // starts to go through all division possibilities one by one
        for (int i = 2; i * i <= number; i++) {
            iteration++;
            if (number % i == 0) {
                sum += i;
                if (i * i != number / i) {
                    sum += (number / i);
                }
            }
        }
        }

        if (number - sum == 0) {
            printf("Number %d is perfect.\n", number);
            printf("Number of iterations: %d\n", iteration);
            break;
        } 
        else {
            printf("Number %d is not perfect.\n", number);
            printf("Number of iterations: %d\n", iteration);
            printf("Do you want to continue (y/n)?\n");
            scanf(" %c", &answer);
            if (answer != 'y' && answer != 'Y') { // this one missing if statement is what caused the loop
                printf("Goodbye!\n");             // without this the user would never be allowed to say no and stop
                return 0;
            }
        }
    }

    
    return 0;
}
