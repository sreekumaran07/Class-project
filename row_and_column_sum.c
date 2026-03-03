#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    printf("\nRow Sum\n");
    for(int i=0;i<3;i++)
    {
        int rsum=0;
        for(int j=0;j<3;j++)
        {
            rsum+=a[i][j];
        }
        printf("%d ",rsum);
    }
    printf("\nColumn Sum\n");
    for(int i=0;i<3;i++)
    {
        int csum=0;
        for(int j=0;j<3;j++)
        {
            csum+=a[j][i];
        }
        printf("%d ",csum);
    }
}
