// use external IDE for bug testing which is why some copy paste was made
//not to future me 1 is indeed not a prime number... NEVER FORGET 1/1 which breaks rule lol
#include <stdio.h>
#include <stdbool.h>

bool prime = true;
int number, divisor, counter;
int main()
{


    printf("The prime numbers in the range of 1-500 are:");

    for (number = 1; number <= 500; number++)
    {   //found out the hard way one is not a prime number so I added this to make the system keep going
        if (number == 1)
    {
        continue;
    }
        //everytime the loop starts the next number in the range we set this true to allow for this to be disproven again
        prime = true;
        // all this does is sees if divisor is less than number the second it goes through all numbers under the number and sees that one divides system makes prime false and breaks
        for (divisor = 2; divisor < number; divisor++)  //divisor starts at 2 bc if at 1 no point
        {   // if number can be divided loop breaks
            if (number % divisor == 0)
            {
                prime = false;
                break;
            }

        }
        // if the loop broke and never went through the if statement then this would be true and allow number to be printed
         if (prime == true)
    {
        printf("%d ", number);
        //every time a number is printed the counter goes up to keep track how many time a prime number existed
        counter++;
    }

    }

    printf("\n");
    printf("The total number of prime numbers in the range of 1-500 is:\t %d", counter);

    return 0;
}
