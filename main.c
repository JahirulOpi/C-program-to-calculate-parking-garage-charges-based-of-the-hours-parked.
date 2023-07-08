#include <stdio.h>

float charge(float x){
    if (x > 0 && x <= 3.0){
        return 2.0;
    }
    else if (x > 3.0 && x < 24.0){
        return 2.0 + ((x-3)*0.5);
    }
    else if (x == 24.0) {
        return 10.0;
    }
}

int main()
{
    int carnum;
    float totalcharge = 0;
    float totalhour = 0;
    printf("Enter the number of the vehicles: ");
    scanf("%d", &carnum);
    float hour[carnum];
    for (int i = 0; i < carnum; i++){
        printf("Enter the parking hours of car %d : ", i+1);
        scanf("%f", &hour[i]);
        totalhour += hour[i];
    }
    printf("Car\t\tHour\t\tTotal Charge\n");
    for (int i = 0; i < carnum; i++){
        printf("%d\t\t%.1f\t\t%.2f\n", i+1, hour[i], charge(hour[i]));
        totalcharge += charge(hour[i]);
    }
    printf("Total\t\t%.1f\t\t%.2f\n", totalhour, totalcharge);
    return 0;
}


