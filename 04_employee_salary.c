#include<stdio.h>
struct Employee {
    char name[50];
    int empid;
    float basic;
    float hra;
    float da;
    float netsalary;
};
int main()
{
    struct Employee e;
    printf("Enter name, empid, basic salary: ");
    scanf("%s %d %f", e.name, &e.empid, &e.basic);
    e.hra = 0.20 * e.basic;
    e.da  = 0.50 * e.basic;
    e.netsalary = e.basic + e.hra + e.da;
    printf("Employee: %s\nID: %d\nNet Salary: %.2f\n", e.name, e.empid, e.netsalary);
    return 0;
}
