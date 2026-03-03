#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int b[100];
    int size = sizeof(a)/sizeof(a[0]);

    int *src = a;
    int *dest = b;

    for(int i=0;i<size;i++)
    {
        *dest = *src;
        src++;
        dest++;
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
