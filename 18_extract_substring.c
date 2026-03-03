#include<stdio.h>
int main()
{
    char str[]="Hello, World!";
    char sub[50];
    int start=7,length=5,i;
    for(i=0;i<length&&str[start+i]!='\0';i++)
        sub[i]=str[start+i];
    sub[i]='\0';
    printf("Substring: %s\n",sub);
    return 0;
}
