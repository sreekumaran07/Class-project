#include<stdio.h>
#include<string.h>
struct Student {
    char name[50];
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
        printf("Enter name and marks: ");
        scanf("%s %f", s[i].name, &s[i].marks);
    }
    // Bubble sort descending
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(s[j].marks < s[j+1].marks)
            {
                struct Student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
    printf("\n--- Ranked Students ---\n");
    for(int i=0;i<n;i++)
        printf("%d. %s - %.2f\n", i+1, s[i].name, s[i].marks);
    return 0;
}
