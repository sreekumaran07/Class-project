#include<stdio.h>

int main()
{
    char str1[]="Raghul";
    char str2[100]="";

    char *ptr1=str1;
    char *ptr2=str2;

    int len=0;
    while(*ptr1!='\0')
    {
        len++;
        ptr1++;
    }

    ptr1=str1;
    for(int i=0;i<len;i++)
    {
        *ptr2=*ptr1;
        ptr1++;
        ptr2++;
    }
    *ptr2='\0';

    printf("%s",str2);

    return 0;
}
