#include <stdio.h>
#include <stdbool.h>
#define MAX 1000
//A player with id x visits all bins that are a multiple of her id. The player will throw a ball in a bin that she visits if the bin is empty,
//or pick up a ball if the bin has at least one ball. After all 100 players complete their turn, we want to find the number and ids of the empty bins.
int main() {
    int bins[MAX] = {0}; //from 0 - 999 well treat 0 as 1 and 1 as 2 and so on by doing
    int players = 100;
    int counter = 0;
    for (int id = 1; id <= players; id++)
    {
        for (int bucketNum = 1; bucketNum <= MAX; bucketNum++)
        {
            if (bucketNum % id == 0){
                if (bins[bucketNum - 1] == 0){
                    bins[bucketNum - 1] = 1;
                }
                else{
                    bins[bucketNum - 1] = 0;
                }
            }
        }
    }
    for (int bucketNum = 0; bucketNum < MAX; bucketNum++) {
        if (bins[bucketNum] == 0){
            printf("%d ", bucketNum + 1);
            counter++;
        }
    }
    printf("\n------------------------------------");
    printf("\nNumber of empty bins: %d", counter);
    return 0;
}
