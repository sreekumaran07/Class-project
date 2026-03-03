#include <stdio.h>
int main() {
    float mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3, rank = n;
    for (int row = 0; row < rank; row++) {
        if (mat[row][row] != 0) {
            for (int r = 0; r < n; r++) {
                if (r != row) {
                    float ratio = mat[r][row] / mat[row][row];
                    for (int c = 0; c < n; c++)
                        mat[r][c] -= ratio * mat[row][c];
                }
            }
        } else {
            int reduce = 1;
            for (int i = row+1; i < n; i++) {
                if (mat[i][row] != 0) {
                    for (int c = 0; c < n; c++) {
                        float temp = mat[row][c];
                        mat[row][c] = mat[i][c];
                        mat[i][c] = temp;
                    }
                    reduce = 0; break;
                }
            }
            if (reduce) {
                rank--;
                for (int i = 0; i < n; i++) mat[i][row] = mat[i][rank];
            }
            row--;
        }
    }
    printf("Rank of Matrix = %d\n", rank);
    return 0;
}