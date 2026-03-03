#include <stdio.h>
int main()
{
    int arr[100], n;
    int isPalindrome = 1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n/2; i++)
    {
        if(arr[i] != arr[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
