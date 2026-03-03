#include <stdio.h>
int main() {
    int arr[]={7,10,4,3,20,15}, n=6, k=3;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
    printf("%dth Minimum = %d\n",k,arr[k-1]);
    return 0;
}