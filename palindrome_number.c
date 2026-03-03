#include<stdio.h>

int palindrome(int n)
{
    int rev=0;
    int num=n;
    int rem;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
   if(n==rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    scanf("%d",&num);
    int ans=palindrome(num);

    ans ? printf("Palindrome") : printf("Not a palindrome");
    return 0;
}
