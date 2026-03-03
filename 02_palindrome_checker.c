#include<stdio.h>
int main()
{
    char a[100];
    int count=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++) count++;
    for(int i=0;i<count/2;i++)
    {
        if(a[i]!=a[count-1-i])
        {
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Is palindrome");
    return 0;
}
