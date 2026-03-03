#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *ptr = str;
    int vowels = 0, consonants = 0;

    while(*ptr != '\0')
    {
        if((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
        {
            if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
               *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        ptr++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
