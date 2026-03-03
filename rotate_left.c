#include <stdio.h>
#define n1 6
#define n2 2
int main() {
    int a[100];
    for(int i=0;i<n1;i++) scanf("%d",&a[i]);
    for(int i=0;i<n2;i++) {
        int temp=a[0];
        for(int i=1;i<n1;i++) a[i-1]=a[i];
        a[n1-1]=temp;
    }
    for(int i=0;i<n1;i++) printf("%d ",a[i]);
    return 0;
}