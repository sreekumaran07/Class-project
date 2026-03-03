#include <stdio.h>
int main() {
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}}, n=3, sum=0;
    for(int i=0;i<n;i++) sum+=mat[i][n-1-i];
    printf("Right Diagonal Sum = %d\n",sum);
    return 0;
}