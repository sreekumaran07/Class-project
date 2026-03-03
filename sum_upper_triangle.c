#include <stdio.h>
int main() {
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}}, sum=0;
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) if(j>i) sum+=mat[i][j];
    printf("Upper Triangle Sum = %d\n",sum);
    return 0;
}