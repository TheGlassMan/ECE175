#include <stdio.h>
#include <stdbool.h>
//function to calculate days Feb would have depending on year
int DaysInFeb (int year){
    if (year % 100 == 0) //checks if year is a century
    {
        if (year % 400 == 0) //year is century now needs to check if leap year
        {
            return 29;
        }
        else{
            return 28;
        }
    }
    else if (year % 4 == 0) // year was not century so it checks if leap year
    {
        return 29;
    }

    else {
        return 28;
    }

}

int main(void) {
    int userYear;
    scanf("%d", &userYear);
    printf("%d has %d days in February.\n", userYear , DaysInFeb(userYear));

    return 0;
}
