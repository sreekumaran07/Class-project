// Print digits of a number in reverse using recursion
#include<stdio.h>

void printDigitsReverse(int n)
{
    if(n == 0)
        return;
    printf("%d ", n % 10);
    printDigitsReverse(n / 10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digits in reverse: ");
    printDigitsReverse(n);
    return 0;
}
