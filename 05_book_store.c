#include<stdio.h>
struct Book {
    char title[100];
    char author[50];
    float price;
    int pages;
};
int main()
{
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter title, author, price, pages: ");
        scanf("%s %s %f %d", b[i].title, b[i].author, &b[i].price, &b[i].pages);
    }
    printf("\n--- Book List ---\n");
    for(int i=0;i<n;i++)
        printf("Title: %s | Author: %s | Price: %.2f | Pages: %d\n",
               b[i].title, b[i].author, b[i].price, b[i].pages);
    return 0;
}
