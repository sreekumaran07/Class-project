#include <stdio.h>
#define n1 5
#define n2 3
int main() {
    int a[100];
    int b[10];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n2;i++)
    {
        a[i+5]=b[i];
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
