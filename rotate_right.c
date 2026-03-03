#include <stdio.h>
#define n1 6
#define n2 2
int main() {
    int a[100];
    for(int i=0;i<n1;i++) scanf("%d",&a[i]);
    for(int k=0;k<n2;k++) {
        int temp=a[n1-1];
        for(int i=n1-1;i>0;i--) a[i]=a[i-1];
        a[0]=temp;
    }
    for(int i=0;i<n1;i++) printf("%d ",a[i]);
    return 0;
}