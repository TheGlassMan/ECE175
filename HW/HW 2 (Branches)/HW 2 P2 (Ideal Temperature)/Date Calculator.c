#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define IDEAL_AWAKE 21.2 // Ideal daytime temperature
#define IDEAL_SLEEP 18.3 // ideal nightime temperature

int main(void){

    float currentTemp; // temperature entered by user
    char userTime; // time of the day entered by user
    bool timeOfDay; // boolean var that holds if it is daytime (true) or nighttime (false)

    printf("Day (d) or Night (n)");
    scanf("%c", &userTime);
    printf("Enter current temperature:");
    scanf("%f", &currentTemp);

    if (userTime == 'd' || userTime == 'D'){
        timeOfDay = true;
    }
    else{
        timeOfDay = false;
    }
    //day time
    if (timeOfDay == true){
        //if ideal is met
        if (fabs(IDEAL_AWAKE - currentTemp) < 0.00001){
            printf("The temperature is ideal.\n");
        }
            // if it temp is too low
        else if(currentTemp < IDEAL_AWAKE){
            printf("You need to raise the temperature by %0.1f degrees.\n", IDEAL_AWAKE - currentTemp);
        }
            // temp is too high
        else{
            printf("You need to lower the temperature by %0.1f degrees.\n", currentTemp - IDEAL_AWAKE);
        }
    }
//nighttime
    if (timeOfDay == false)
    {
        //temp is met
        if (fabs(IDEAL_SLEEP - currentTemp) < 0.00001){
            printf("The temperature is ideal. Have a good night's sleep.\n");
        }
            //temp is too low
        else if(currentTemp < IDEAL_SLEEP){
            printf("You need to raise the temperature by %0.1f degrees.\n", IDEAL_SLEEP - currentTemp);
        }
            //temp is too high
        else{
            printf("You need to lower the temperature by %0.1f degrees.\n", currentTemp - IDEAL_SLEEP);
        }
    }
    return 0;
}
