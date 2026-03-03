#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *start = str;
    char *end = str + strlen(str) - 1;

    int isPalindrome = 1;

    while(start < end)
    {
        if(*start != *end)
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
