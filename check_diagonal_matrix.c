#include <stdio.h>
int main() {
    int mat[3][3]={{2,0,0},{0,5,0},{0,0,9}}, n=3, flag=1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(i!=j&&mat[i][j]!=0){flag=0;break;}
    printf(flag?"Diagonal Matrix\n":"Not a Diagonal Matrix\n");
    return 0;
}