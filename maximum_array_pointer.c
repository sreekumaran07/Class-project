#include<stdio.h>

int main()
{
    int a[]={1,2,3,4};
    int *ptr=a;
    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<size;i++)
    {
        if(a[i]>*ptr)
        {
            ptr=&a[i];
        }
    }

    printf("%d is the maximum",*ptr);
}
