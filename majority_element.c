#include <stdio.h>
int main() {
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int majority=-1,count;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++) if(arr[i]==arr[j]) count++;
        if(count>n/2){majority=arr[i];break;}
    }
    if(majority!=-1) printf("Majority element: %d\n",majority);
    else printf("No majority element\n");
    return 0;
}