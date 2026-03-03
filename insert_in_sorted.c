#include <stdio.h>
int main() {
    int arr[10]={1,3,5,7,9}, n=5, val=6, pos=5;
    for(int i=0;i<n;i++) if(arr[i]>val){pos=i;break;}
    for(int i=n;i>pos;i--) arr[i]=arr[i-1];
    arr[pos]=val; n++;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}