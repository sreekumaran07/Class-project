#include<stdio.h>
int main()
{
    char str[]="Hello World How Are You";
    char words[10][50];
    int count=0, j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            words[count][j++]=str[i];
        }
        else
        {
            words[count][j]='\0';
            count++; j=0;
        }
    }
    words[count][j]='\0';
    count++;
    printf("Reversed: ");
    for(int i=count-1;i>=0;i--)
        printf("%s ",words[i]);
    return 0;
}
