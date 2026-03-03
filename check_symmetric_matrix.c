#include <stdio.h>
int main() {
    int arr[100][100],n,ok=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    for(int i=0;i<n&&ok;i++) for(int j=0;j<n;j++) if(arr[i][j]!=arr[j][i]){ok=0;break;}
    printf(ok?"Symmetric\n":"Not Symmetric\n");
    return 0;
}