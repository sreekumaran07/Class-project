#include <stdio.h>
int main() {
    int arr[100][100],n,mainSum=0,secSum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    for(int i=0;i<n;i++){mainSum+=arr[i][i];secSum+=arr[i][n-1-i];}
    printf("Main=%d\nSecondary=%d\n",mainSum,secSum);
    return 0;
}