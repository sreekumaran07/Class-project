#include<stdio.h>
int main()
{
    char s1[]="Hello", s2[]="Hello";
    int i=0, equal=1;
    while(s1[i]!='\0'&&s2[i]!='\0')
    {
        if(s1[i]!=s2[i]){ equal=0; break; }
        i++;
    }
    if(s1[i]!='\0'||s2[i]!='\0') equal=0;
    printf(equal?"Strings are Equal\n":"Strings are Not Equal\n");
    return 0;
}
