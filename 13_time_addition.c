#include<stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time addTime(struct Time t1, struct Time t2)
{
    struct Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds/60;
    result.seconds %= 60;
    result.hours   = t1.hours + t2.hours + result.minutes/60;
    result.minutes %= 60;
    return result;
}
int main()
{
    struct Time t1, t2, t3;
    printf("Enter time 1 (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter time 2 (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    t3 = addTime(t1, t2);
    printf("Sum = %02d:%02d:%02d\n", t3.hours, t3.minutes, t3.seconds);
    return 0;
}
