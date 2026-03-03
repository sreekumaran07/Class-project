#include <stdio.h>
int main() {
    int arr[]={12,35,1,10,34}, n=5;
    int first=99999,second=99999;
    for(int i=0;i<n;i++){
        if(arr[i]<first){second=first;first=arr[i];}
        else if(arr[i]<second&&arr[i]!=first) second=arr[i];
    }
    printf("Second Minimum = %d\n",second);
    return 0;
}