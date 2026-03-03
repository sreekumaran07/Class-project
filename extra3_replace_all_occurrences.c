#include<stdio.h>
int main()
{
    char str[]="hello world";
    char find='l', replace='x';
    for(int i=0;str[i]!='\0';i++)
        if(str[i]==find) str[i]=replace;
    printf("After replace: %s\n",str);
    return 0;
}
