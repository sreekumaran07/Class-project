#include<stdio.h>
int main()
{
    char source[100];
    char destination[100];
    scanf("%s",source);
    int len=0;
    while(source[len]!='\0') len++;
    for(int i=0;i<len;i++)
        destination[i]=source[i];
    destination[len]='\0';
    printf("%s",destination);
    return 0;
}
