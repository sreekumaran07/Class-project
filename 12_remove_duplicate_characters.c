#include<stdio.h>
int main()
{
    char str[]="programming";
    int seen[256]={0};
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(seen[(int)str[i]]==0)
        {
            seen[(int)str[i]]=1;
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    printf("After removing duplicates: %s\n",str);
    return 0;
}
