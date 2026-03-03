#include <stdio.h>
#include <limits.h>
int main() {
    int arr[100], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int largest=INT_MIN, second_largest=INT_MIN;
    int smallest=INT_MAX, second_smallest=INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i]>largest){second_largest=largest;largest=arr[i];}
        else if(arr[i]>second_largest&&arr[i]!=largest) second_largest=arr[i];
        if(arr[i]<smallest){second_smallest=smallest;smallest=arr[i];}
        else if(arr[i]<second_smallest&&arr[i]!=smallest) second_smallest=arr[i];
    }
    printf("Second Smallest=%d\nSecond Largest=%d\n",second_smallest,second_largest);
    return 0;
}