#include <stdio.h>
int main() {
    int arr[]={1,2,3,5,6}, n=5, sum=0;
    int total=(6*(6+1))/2;
    for(int i=0;i<n;i++) sum+=arr[i];
    printf("Missing element = %d\n",total-sum);
    return 0;
}