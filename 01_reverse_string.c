#include<stdio.h>
int main()
{
    char a[100];
    int count=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++) count++;
    for(int i=0;i<count/2;i++)
    {
        char temp=a[count-1-i];
        a[count-1-i]=a[i];
        a[i]=temp;
    }
    printf("%s",a);
    return 0;
}
