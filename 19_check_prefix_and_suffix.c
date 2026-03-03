#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="HelloWorld";
    char prefix[]="Hello",suffix[]="World";
    int slen=strlen(str);
    int plen=strlen(prefix);
    int suflen=strlen(suffix);
    int hasPrefix=(strncmp(str,prefix,plen)==0);
    int hasSuffix=(strncmp(str+slen-suflen,suffix,suflen)==0);
    printf(hasPrefix?"Has Prefix\n":"No Prefix\n");
    printf(hasSuffix?"Has Suffix\n":"No Suffix\n");
    return 0;
}
