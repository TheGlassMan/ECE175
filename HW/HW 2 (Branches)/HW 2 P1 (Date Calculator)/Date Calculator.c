#include <stdio.h>
#include <stdbool.h>

int main() {
    int inputMonth;
    int inputDay;
    int daysForward;
    int month;
    bool feb;
    int day;

    //

    //enter date (month and day)
    //printf("Enter the month and day:");
    scanf("%d", &inputMonth);
    scanf("%d", &inputDay);
    //printf("Enter the days forward:");
    scanf("%d", &daysForward);
    //day and month will be my other variable for the new date
    day = inputDay;
    month = inputMonth;

    if (month <= 2){
        feb = true;
    }
    else{
        feb = false;
    }

    if (daysForward >= 30 && feb == false)
    {
        month = daysForward / 30 + month;
        day = daysForward % 30 + day;
    }
    else if (daysForward >= 28 && feb == true)
    {
        month = daysForward / 28 + month;
        day = daysForward % 28 + day - 2;
    }
    else{
        day = daysForward + inputDay;
    }

    if (feb == true && (day >= 28 || inputDay >= 28)){
        month = day / 30 + month;
        day = day % 30 + day;
    }





    printf("After %d days, the date of %d/%d will be %d/%d.", daysForward, inputMonth, inputDay, month, day  );

    return 0;
}
