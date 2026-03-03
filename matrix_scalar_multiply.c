#include <stdio.h>
int main() {
    int mat[2][2] = {{1,2},{3,4}};
    int scalar = 3;
    printf("After scalar multiplication by %d:\n", scalar);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", mat[i][j] * scalar);
        printf("\n");
    }
    return 0;
}