#include<stdio.h>
struct Book {
    int id;
    char title[100];
    char author[50];
    int available; // 1=yes, 0=no
};
int main()
{
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    struct Book lib[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter id, title, author: ");
        scanf("%d %s %s", &lib[i].id, lib[i].title, lib[i].author);
        lib[i].available = 1;
    }
    int searchid;
    printf("\nEnter book ID to borrow: ");
    scanf("%d", &searchid);
    for(int i=0;i<n;i++)
    {
        if(lib[i].id == searchid)
        {
            if(lib[i].available)
            {
                lib[i].available = 0;
                printf("Book '%s' borrowed successfully!\n", lib[i].title);
            }
            else printf("Book not available!\n");
            break;
        }
    }
    printf("\n--- Library Status ---\n");
    for(int i=0;i<n;i++)
        printf("ID:%d | %s | %s\n", lib[i].id, lib[i].title,
               lib[i].available?"Available":"Borrowed");
    return 0;
}
