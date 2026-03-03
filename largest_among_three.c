#include<stdio.h>

int maximum(int a, int b, int c)
{
   int max=0;
   if(a>b && a>c)
   {
       max=a;
   }

   else if(b>a && b>c)
   {
       max=b;
   }

   else
   {
       max=c;
   }

   return max;
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=maximum(a,b,c);
    printf("%d is the maximum",max);
    return 0;
}
