#include<stdio.h>
struct Matrix {
    int rows;
    int cols;
    int data[10][10];
};
struct Matrix addMatrix(struct Matrix a, struct Matrix b)
{
    struct Matrix result;
    result.rows = a.rows;
    result.cols = a.cols;
    for(int i=0;i<a.rows;i++)
        for(int j=0;j<a.cols;j++)
            result.data[i][j] = a.data[i][j] + b.data[i][j];
    return result;
}
void printMatrix(struct Matrix m)
{
    for(int i=0;i<m.rows;i++)
    {
        for(int j=0;j<m.cols;j++)
            printf("%d ", m.data[i][j]);
        printf("\n");
    }
}
int main()
{
    struct Matrix a, b, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &a.rows, &a.cols);
    b.rows=a.rows; b.cols=a.cols;
    printf("Enter matrix A:\n");
    for(int i=0;i<a.rows;i++)
        for(int j=0;j<a.cols;j++)
            scanf("%d", &a.data[i][j]);
    printf("Enter matrix B:\n");
    for(int i=0;i<b.rows;i++)
        for(int j=0;j<b.cols;j++)
            scanf("%d", &b.data[i][j]);
    c = addMatrix(a, b);
    printf("Sum Matrix:\n");
    printMatrix(c);
    return 0;
}
