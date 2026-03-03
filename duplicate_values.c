#include <stdio.h>
int main() {
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int found=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]==arr[j]){printf("%d ",arr[i]);found=1;break;}
    if(!found) printf("No duplicates found");
    return 0;
}