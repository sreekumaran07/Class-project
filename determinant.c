#include <stdio.h>
int main() {
    // 2x2 Determinant
    int a[2][2] = {{3,8},{4,6}};
    int det2 = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    printf("2x2 Determinant = %d\n", det2);

    // 3x3 Determinant
    int b[3][3] = {{6,1,1},{4,-2,5},{2,8,7}};
    int det3 = b[0][0]*(b[1][1]*b[2][2] - b[1][2]*b[2][1])
             - b[0][1]*(b[1][0]*b[2][2] - b[1][2]*b[2][0])
             + b[0][2]*(b[1][0]*b[2][1] - b[1][1]*b[2][0]);
    printf("3x3 Determinant = %d\n", det3);
    return 0;
}