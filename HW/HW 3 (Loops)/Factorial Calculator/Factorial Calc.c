// hello grader all debbuging is done in my own IDE since the one on here is weird :)
// so if it looks weird how im figuring out these problems that is why

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int factorial;
    int f; // f is the number n is subtracted by
    long int product = 1; // product of the numbers under n so like if n = 5 product is 4 * 3 * 2 * 1
    long int final; // last two ints are long since factorials can get real big

    scanf("%d", &n);

    if (n == 0){ //since 0 is so definite no need for equation just straight 1
        final = 1;
        printf("%d! = %ld\n", n, final);
    }

    else if (n > 0){

    for ( f = 1; f < n; f++){
        factorial = (n - f);
        product *= factorial;
    }

        final = n * product;
        printf("%d! = %ld\n", n, final);
   }

    else{

        printf("Invalid n"); // since the prompt did not ask for negative factorials to work I just put this
    }


    return 0;
}
