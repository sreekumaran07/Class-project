#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i=0;
    while(a[i]!='\0' && b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            printf("%d",a[i]-b[i]);
            return 0;
        }
        i++;
    }
    printf("%d",a[i]-b[i]);
    return 0;
}
