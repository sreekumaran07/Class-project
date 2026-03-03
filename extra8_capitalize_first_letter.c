#include<stdio.h>
int main()
{
    char str[]="hello world from c";
    int newWord=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            newWord=1;
        }
        else if(newWord)
        {
            if(str[i]>='a'&&str[i]<='z')
                str[i]-=32;
            newWord=0;
        }
    }
    printf("Capitalized: %s\n",str);
    return 0;
}
