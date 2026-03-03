#include<stdio.h>
int main()
{
    char s1[]="hello", s2[]="world";
    printf("From s1 after removing common: ");
    for(int i=0;s1[i]!='\0';i++)
    {
        int found=0;
        for(int j=0;s2[j]!='\0';j++)
            if(s1[i]==s2[j]){ found=1; break; }
        if(!found) printf("%c",s1[i]);
    }
    printf("\nFrom s2 after removing common: ");
    for(int i=0;s2[i]!='\0';i++)
    {
        int found=0;
        for(int j=0;s1[j]!='\0';j++)
            if(s2[i]==s1[j]){ found=1; break; }
        if(!found) printf("%c",s2[i]);
    }
    printf("\n");
    return 0;
}
