#include<stdio.h>
int main()
{
    char src[]="HELLO";
    char dest[50];
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    printf("Source     : %s\n",src);
    printf("Destination: %s\n",dest);
    return 0;
}
