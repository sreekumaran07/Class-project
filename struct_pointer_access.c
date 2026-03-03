#include<stdio.h>

struct Student
{
    char name[100];
    int age;
    float marks;
};

int main()
{
    struct Student s1 = {"Raghul", 20, 85.5};
    struct Student *ptr = &s1;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
