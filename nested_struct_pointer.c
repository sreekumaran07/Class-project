#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[100];
    struct Date doj;
};

int main()
{
    struct Employee e1 = {"Raghul", {1, 3, 2026}};
    struct Employee *ptr = &e1;

    printf("Name: %s\n", ptr->name);
    printf("Date of Joining: %d/%d/%d\n",
           ptr->doj.day,
           ptr->doj.month,
           ptr->doj.year);

    return 0;
}
