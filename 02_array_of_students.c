#include<stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks;
};
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name, rollno, marks for student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].rollno, &s[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for(int i=0;i<n;i++)
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s[i].name, s[i].rollno, s[i].marks);
    return 0;
}
