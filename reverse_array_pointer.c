#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int size = sizeof(a)/sizeof(a[0]);

    int *start = a;
    int *end = a + size - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
