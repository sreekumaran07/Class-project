#include <stdio.h>
int main() {
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{1,2},{3,4}};
    int flag = 1;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (a[i][j] != b[i][j]) { flag = 0; break; }
    printf(flag ? "Matrices are Equal\n" : "Matrices are Not Equal\n");
    return 0;
}