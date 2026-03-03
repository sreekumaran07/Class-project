#include <stdio.h>
int main() {
    int A[100][100],B[100][100],result[100][100],r,c;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&B[i][j]);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){result[i][j]=A[i][j]+B[i][j];printf("%d ",result[i][j]);}
        printf("\n");
    }
    return 0;
}