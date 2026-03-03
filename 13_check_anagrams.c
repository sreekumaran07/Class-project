#include<stdio.h>
int main()
{
    char str1[]="listen";
    char str2[]="silent";
    int freq[256]={0};
    for(int i=0;str1[i]!='\0';i++) freq[(int)str1[i]]++;
    for(int i=0;str2[i]!='\0';i++) freq[(int)str2[i]]--;
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            printf("Not anagram");
            return 0;
        }
    }
    printf("Is an anagram");
    return 0;
}
