#include<stdio.h>

void fun(int *a, int *b)
{
    printf("%d + %d = %d",*a,*b,*a+*b);
    printf("\n%d - %d = %d",*a,*b,*a-*b);
    printf("\n%d * %d = %d",*a,*b,(*a)*(*b));
}

int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    fun(&n1,&n2);
    return 0;
}
