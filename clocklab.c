#include<stdio.h>
void clocklab(void){

    int inputSecond;

    int hours,minutes,seconds;
    int remainingSeconds;

    int secondsInHour = 60 * 60;
    int secondsInMinute = 60;

    printf("Enter seconds : ");
    scanf("%d",&inputSecond);

    hours = (inputSecond/secondsInHour);

    remainingSeconds = inputSecond - (hours * secondsInHour);
    minutes = remainingSeconds/secondsInMinute;

    remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
    seconds = remainingSeconds;

    printf("%d hour, %d minutes and %d seconds\n",hours,minutes,seconds);
}
