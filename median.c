#include <stdio.h>
int main() {
    int arr[]={3,1,4,1,5,9,2}, n=7;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
    if(n%2!=0) printf("Median = %d\n",arr[n/2]);
    else printf("Median = %.1f\n",(arr[n/2-1]+arr[n/2])/2.0);
    return 0;
}