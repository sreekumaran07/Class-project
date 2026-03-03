#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="ABCD", s2[]="CDAB";
    int len1=0, len2=0;
    while(s1[len1]!='\0') len1++;
    while(s2[len2]!='\0') len2++;
    if(len1!=len2){ printf("False\n"); return 0; }
    char temp[100];
    int i=0, j=0;
    while(s1[i]!='\0') temp[i++]=s1[j++];
    j=0;
    while(s1[j]!='\0') temp[i++]=s1[j++];
    temp[i]='\0';
    if(strstr(temp,s2)) printf("True\n");
    else printf("False\n");
    return 0;
}
