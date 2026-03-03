#include<stdio.h>
int main()
{
    char str[]="Hello, World! How are you?";
    int count=0, j=0;
    char result[100];
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='!'||ch==','||ch=='.'||ch=='?'||ch==';'||
           ch==':'||ch=='\'||ch=='"'||ch=='-')
        {
            count++;
        }
        else
        {
            result[j++]=ch;
        }
    }
    result[j]='\0';
    printf("Punctuation count = %d\n",count);
    printf("After removing punctuation: %s\n",result);
    return 0;
}
