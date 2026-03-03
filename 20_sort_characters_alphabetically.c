#include<stdio.h>
int main()
{
    char str[]="programming";
    int n=0;
    while(str[n]!='\0') n++;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
    printf("Sorted: %s\n",str);
    return 0;
}
