#include<stdio.h>

int main()
{
    char str[]="Raghul";
    char *ptr=str;
    int len=0;
    for(int i=0;*ptr!='\0';i++)
    {
        len++;
        ptr++;
    }
    printf("%d is the length of the string",len);
    return 0;
}
