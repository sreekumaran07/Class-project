#include<stdio.h>

int factorial(int n)
{
    int fact=1;
    while(n!=0)
    {
        fact*=n;
        n--;
    }

    return fact;
}

int main()
{
    int num;
    scanf("%d",&num);
    int fact=factorial(num);
    printf("%d is the factorial of %d", fact, num);
    return 0;
}
