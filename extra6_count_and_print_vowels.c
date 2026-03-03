#include<stdio.h>
int main()
{
    char str[]="Hello World";
    int count=0;
    printf("Vowels found: ");
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("%c ",ch);
            count++;
        }
    }
    printf("\nTotal vowels = %d\n",count);
    return 0;
}
