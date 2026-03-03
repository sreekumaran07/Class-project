#include<stdio.h>
int main()
{
    char str[]="ragHul iS bOY";
    int new_word=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ') new_word=1;
        else if(new_word==1)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]-=32;
                new_word=0;
            }
        }
        else
        {
            if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
        }
    }
    printf("%s",str);
    return 0;
}
