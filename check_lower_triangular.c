#include <stdio.h>
int main() {
    int mat[3][3] = {{1,0,0},{4,5,0},{7,8,9}};
    int n = 3, flag = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j > i && mat[i][j] != 0) { flag = 0; break; }
    printf(flag ? "Lower Triangular Matrix\n" : "Not Lower Triangular\n");
    return 0;
}