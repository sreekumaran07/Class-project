#include <stdio.h>
int main() {
    // Solving: 2x + y = 5, x + 3y = 10
    float mat[2][3] = {{2,1,5},{1,3,10}};
    int n = 2;
    for (int i = 0; i < n; i++) {
        float pivot = mat[i][i];
        for (int j = 0; j <= n; j++) mat[i][j] /= pivot;
        for (int r = 0; r < n; r++) {
            if (r != i) {
                float factor = mat[r][i];
                for (int j = 0; j <= n; j++)
                    mat[r][j] -= factor * mat[i][j];
            }
        }
    }
    printf("Solution:\n");
    for (int i = 0; i < n; i++)
        printf("x%d = %.2f\n", i+1, mat[i][n]);
    return 0;
}