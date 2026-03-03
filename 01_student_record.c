#include<stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks;
};
int main()
{
    struct Student s;
    printf("Enter name, roll number, marks: ");
    scanf("%s %d %f", s.name, &s.rollno, &s.marks);
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.rollno, s.marks);
    return 0;
}
