#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of matrix (n x n): ");
    scanf("%d",&n);
    int a[n][n], b[n][n], prod[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            prod[i][j]=0;
    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                prod[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nProduct Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
