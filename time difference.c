#include <stdio.h>

//program to calculate difference between two time periods difference.
typedef struct time {
    int hours;
    int minutes;
    int seconds;
}time;

void subtract(time t1, time t2, time *difference);

int main() {
    time t1, t2, difference;

    printf("Enter the first time period\n");
    printf("Enter number of hours: ");
    scanf("%d", &t1.hours);
    printf("Enter number of minutes: ");
    scanf("%d", &t1.minutes);
    printf("Enter number of seconds: ");
    scanf("%d", &t1.seconds);

    printf("Enter the second time period\n");
    printf("Enter number of hours: ");
    scanf("%d", &t2.hours);
    printf("Enter number of minutes: ");
    scanf("%d", &t2.minutes);
    printf("Enter number of seconds: ");
    scanf("%d", &t2.seconds);

    subtract(t1, t2, &difference);
    printf("Hours: %d\n", difference.hours);
    printf("Minutes: %d\n", difference.minutes);
    printf("Seconds: %d\n", difference.seconds);

    return 0;

}

void subtract(time t1, time t2, time *difference) {
   while(t2.seconds>t1.seconds) {
    t1.minutes--;
    t1.seconds += 60;
   }
   difference->seconds = t1.seconds-t2.seconds;
   while(t2.minutes>t1.minutes) {
    t1.hours--;
    t1.minutes += 60;
   }
   difference->minutes = t1.minutes-t2.minutes;
   difference->hours = t1.hours-t2.hours;
}
