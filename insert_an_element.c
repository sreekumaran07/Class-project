#include<stdio.h>
int main() {
    int a[]={1,2,3,4,5};
    int num,pos, n=5;
    scanf("%d %d",&num,&pos);
    for(int i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=num;
    for(int i=0;i<6;i++) printf("%d ",a[i]);
}