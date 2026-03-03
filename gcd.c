#include<stdio.h>

int gcd(int n1,int n2)
{
    int min=(n1<n2)?n1:n2;
    int gcd;

    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int ans=gcd(n1,n2);

    printf("%d is the GCD", ans);
    return 0;
}
