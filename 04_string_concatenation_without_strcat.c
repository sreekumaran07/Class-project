#include<stdio.h>
int main()
{
    char a[200];
    char b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i=0,j=0;
    while(a[i]!='\0') i++;
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++; j++;
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}
