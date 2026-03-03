#include<stdio.h>
int main()
{
    char str[]="Hello World";
    int len=0;
    while(str[len]!='\0') len++;
    printf("Length = %d\n",len);
    return 0;
}
