#include <stdio.h>
int main() {
    int arr[100], n, index;
    printf("Enter number of elements: "); scanf("%d", &n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter index to delete: "); scanf("%d",&index);
    if(index<0||index>=n) { printf("Invalid index!\n"); }
    else {
        for(int i=index;i<n-1;i++) arr[i]=arr[i+1];
        n--;
        for(int i=0;i<n;i++) printf("%d ",arr[i]);
    }
    return 0;
}