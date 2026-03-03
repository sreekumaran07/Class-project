#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){ char t=*a; *a=*b; *b=t; }
void permute(char str[], int start, int end)
{
    if(start==end){ printf("%s\n",str); return; }
    for(int i=start;i<=end;i++)
    {
        swap(&str[start],&str[i]);
        permute(str,start+1,end);
        swap(&str[start],&str[i]);
    }
}
int main()
{
    char str[]="ABC";
    int n=strlen(str);
    printf("All permutations:\n");
    permute(str,0,n-1);
    return 0;
}
