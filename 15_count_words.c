#include<stdio.h>
int main()
{
    char str[]="hello world how are you";
    int count=0,inWord=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(!inWord){ count++; inWord=1; }
        }
        else inWord=0;
    }
    printf("Word count = %d\n",count);
    return 0;
}
