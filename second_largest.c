#include <stdio.h>
int main() {
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int largest=-99999,second=-99999;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){second=largest;largest=arr[i];}
        else if(arr[i]>second&&arr[i]!=largest) second=arr[i];
    }
    if(second==-99999) printf("No second largest\n");
    else printf("Second largest: %d\n",second);
    return 0;
}