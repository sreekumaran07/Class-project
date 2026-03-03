#include<stdio.h>
int main()
{
    char str[]="aabbcde";
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++) freq[(int)str[i]]++;
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[(int)str[i]]==1)
        {
            printf("First non-repeating: %c\n",str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}
