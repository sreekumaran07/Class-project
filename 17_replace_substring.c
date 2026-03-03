#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="I love Java programming";
    char find[]="Java",replace[]="C";
    char result[100]="";
    char *pos=strstr(str,find);
    if(pos!=0)
    {
        strncat(result,str,pos-str);
        strcat(result,replace);
        strcat(result,pos+strlen(find));
        printf("After replace: %s\n",result);
    }
    else printf("Substring not found\n");
    return 0;
}
