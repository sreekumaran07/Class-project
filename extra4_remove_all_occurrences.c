#include<stdio.h>
int main()
{
    char str[]="hello world";
    char rem='l';
    int j=0;
    for(int i=0;str[i]!='\0';i++)
        if(str[i]!=rem) str[j++]=str[i];
    str[j]='\0';
    printf("After removal: %s\n",str);
    return 0;
}
