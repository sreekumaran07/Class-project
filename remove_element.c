#include <stdio.h>
int main() {
    int arr[]={10,20,30,40,50}, n=5, val=30, i, j, found=-1;
    for(i=0;i<n;i++) if(arr[i]==val){found=i;break;}
    if(found!=-1){
        for(j=found;j<n-1;j++) arr[j]=arr[j+1];
        n--;
        for(i=0;i<n;i++) printf("%d ",arr[i]);
    } else printf("Element not found\n");
    return 0;
}