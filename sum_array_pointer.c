#include<stdio.h>

int main()
{
    int a[]={1,2,3,4};
    int *ptr=a;
    int sum=0;
    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("%d is the sum",sum);
}
