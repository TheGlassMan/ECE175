/*hello future me with the limits i have as of now
* this is not the best "calculator" to use
* one day i will look back and see how to make this the best calculator
* but for now it works up to a point
* (somwhere around days forward 400<daysforward<500)
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int inputMonth;
    int inputDay;
    int daysForward;
    int month;
    bool feb;
    int day;



    //enter date (month and day)
    scanf("%d", &inputMonth);
    scanf("%d", &inputDay);
    //enter days forward
    scanf("%d", &daysForward);
    //day and month will be my other variable for the new date
    // also for math reasons i kept using inputDay/month to make things simple
    day = inputDay;
    month = inputMonth;

    if (month <= 2){
        feb = true;
    }
    else{
        feb = false;
    }
    //this for any months past feb
    if (daysForward >= 30 && feb == false)
    {
        month = daysForward / 30 + inputMonth;
        day = daysForward % 30 + inputDay;


    }
        //this is for jan & feb
    else if (daysForward >= 28 && feb == true)
    {
        month = daysForward / 28 + inputMonth;
        day = daysForward % 28 + inputDay - 2; //fixed realized this work for up to 400 ish

    }
    else{
        day = daysForward + inputDay;
    }
//since in this case our year is 358 days this is to convert 358 days to one year
    if(daysForward + inputDay > 358){
        day = inputDay + daysForward - 358;
        month = inputMonth + 12;
        if (month > 12)
        {
            month = month - 12;
        }

    }

    printf("After %d days, the date of %d/%d will be %d/%d.", daysForward, inputMonth, inputDay, month, day  );

    return 0;
}
