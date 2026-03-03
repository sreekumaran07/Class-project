#include <stdio.h>
int main() {
    int a[]={1,2,3,4,5}, b[]={1,2,3,4,5}, n=5, m=5, equal=1;
    if(n!=m) equal=0;
    else for(int i=0;i<n;i++) if(a[i]!=b[i]){equal=0;break;}
    printf(equal?"Arrays are Equal\n":"Arrays are Not Equal\n");
    return 0;
}