#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int size = sizeof(a)/sizeof(a[0]);
    int e=0;
    int o=0;

    int *ptr=a;
    for(int i=0;i<size;i++)
    {
        if(*ptr%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        ptr++;
    }
    printf("ODDS=%d and EVENS=%d",o,e);

    return 0;
}
