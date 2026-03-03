#include <stdio.h>
int main() {
    int n; scanf("%d",&n);
    int a[n], frequency[10]={0};
    for(int i=0;i<n;i++){scanf("%d",&a[i]);frequency[a[i]]++;}
    for(int i=0;i<10;i++) if(frequency[i]>0) printf("%d occurs %d times\n",i,frequency[i]);
    return 0;
}