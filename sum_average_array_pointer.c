#include<stdio.h>

int fun(int *ptr, int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(*ptr);
        ptr++;
    }

    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=fun(arr,size);
    float avg=(float)sum/size;
    printf("%d is sum and %f is average",sum,avg);
    return 0;
}
