#include<stdio.h>
int main()
{
    char str[]="Hello World 123";
    int v=0,c=0,d=0,s=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') v++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) c++;
        else if(ch>='0'&&ch<='9') d++;
        else if(ch==' ') s++;
    }
    printf("Vowels=%d Consonants=%d Digits=%d Spaces=%d\n",v,c,d,s);
    return 0;
}
