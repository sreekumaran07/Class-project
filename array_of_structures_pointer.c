#include<stdio.h>

struct Book
{
    int id;
    char title[100];
    float price;
};

int main()
{
    struct Book books[2] = {
        {1, "C Programming", 450.0},
        {2, "Data Structures", 550.0}
    };

    struct Book *ptr = books;

    for(int i=0;i<2;i++)
    {
        printf("\nBook %d\n", i+1);
        printf("ID: %d\n", (ptr+i)->id);
        printf("Title: %s\n", (ptr+i)->title);
        printf("Price: %.2f\n", (ptr+i)->price);
    }

    return 0;
}
