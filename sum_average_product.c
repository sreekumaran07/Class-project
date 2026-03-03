#include<stdio.h>
int main()
{
    int a[100];
    int sum=0,prod=1,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        prod*=a[i];
    }
    float average=(float)sum/n;
    printf("%d is sum , %.2f is average and %d is product",sum,average,prod);
}
