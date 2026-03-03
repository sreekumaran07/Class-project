#include<stdio.h>
int main()
{
    char str[]="The quick brown fox jumps over the lazy dog!";
    int freq[26]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z') freq[str[i]-'a']=1;
        if(str[i]>='A'&&str[i]<='Z') freq[str[i]-'A']=1;
    }
    int pangram=1;
    for(int i=0;i<26;i++)
        if(freq[i]==0){ pangram=0; break; }
    printf(pangram?"It is a Pangram\n":"Not a Pangram\n");
    return 0;
}
