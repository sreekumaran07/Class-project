#include <stdio.h>
int main() {
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    long product=1;
    for(int i=0;i<3;i++) product*=mat[i][i];
    printf("Diagonal Product = %ld\n",product);
    return 0;
}