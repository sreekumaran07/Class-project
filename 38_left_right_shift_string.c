#include<stdio.h>
int main()
{
    char str[]="ABCDE";
    int n=0, choice, positions;
    while(str[n]!='\0') n++;
    printf("1.Left Shift  2.Right Shift\nChoice: ");
    scanf("%d",&choice);
    printf("Positions: ");
    scanf("%d",&positions);
    positions=positions%n;
    char temp[100];
    int i, j=0;
    if(choice==1)
    {
        for(i=positions;i<n;i++) temp[j++]=str[i];
        for(i=0;i<positions;i++) temp[j++]=str[i];
    }
    else
    {
        for(i=n-positions;i<n;i++) temp[j++]=str[i];
        for(i=0;i<n-positions;i++) temp[j++]=str[i];
    }
    temp[j]='\0';
    printf("Result: %s\n",temp);
    return 0;
}
