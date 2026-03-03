#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Find the longest word here";
    char longest[50]="",current[50]="";
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ') current[j++]=str[i];
        else
        {
            current[j]='\0'; j=0;
            if(strlen(current)>strlen(longest))
                strcpy(longest,current);
        }
    }
    current[j]='\0';
    if(strlen(current)>strlen(longest))
        strcpy(longest,current);
    printf("Longest word: %s\n",longest);
    return 0;
}
