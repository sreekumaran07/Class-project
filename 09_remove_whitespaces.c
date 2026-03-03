#include<stdio.h>
int main()
{
    char a[100]="Rag hul";
    int j=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]='\0';
    printf("%s",a);
    return 0;
}
