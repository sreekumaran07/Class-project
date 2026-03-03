#include<stdio.h>
#include<string.h>
int main()
{
    char words[3][20]={"flower","flow","flight"};
    int n=3;
    char prefix[20];
    strcpy(prefix,words[0]);
    for(int i=1;i<n;i++)
    {
        int j=0;
        while(prefix[j]!='\0'&&words[i][j]!='\0'&&prefix[j]==words[i][j]) j++;
        prefix[j]='\0';
    }
    printf("Longest Common Prefix: %s\n",prefix);
    return 0;
}
