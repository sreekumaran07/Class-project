#include<stdio.h>
int main()
{
    char s1[]="apple", s2[]="banana";
    int i=0;
    while(s1[i]!='\0'&&s2[i]!='\0'&&s1[i]==s2[i]) i++;
    if(s1[i]=='\0'&&s2[i]=='\0')
        printf("Strings are Equal\n");
    else if(s1[i]<s2[i])
        printf("%s comes first (Lexicographically smaller)\n",s1);
    else
        printf("%s comes first (Lexicographically smaller)\n",s2);
    return 0;
}
