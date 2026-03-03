#include<stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
int isValid(struct Date d)
{
    if(d.month<1||d.month>12) return 0;
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    // Check leap year
    if(d.year%400==0||(d.year%4==0&&d.year%100!=0)) days[1]=29;
    if(d.day<1||d.day>days[d.month-1]) return 0;
    return 1;
}
int main()
{
    struct Date d;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
    if(isValid(d))
        printf("%d/%d/%d is a Valid Date\n", d.day, d.month, d.year);
    else
        printf("Invalid Date\n");
    return 0;
}
