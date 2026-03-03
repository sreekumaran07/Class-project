#include<stdio.h>
int main()
{
    char str[]="hello";
    int len=0;
    while(str[len]!='\0') len++;
    int start=0, end=len-1;
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++; end--;
    }
    printf("Reversed: %s\n",str);
    return 0;
}
