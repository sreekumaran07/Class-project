#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6}, n=6, evenSum=0, oddSum=0;
    for(int i=0;i<n;i++) { if(arr[i]%2==0) evenSum+=arr[i]; else oddSum+=arr[i]; }
    printf("Sum of Even = %d\nSum of Odd = %d\n", evenSum, oddSum);
    return 0;
}