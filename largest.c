#include<stdio.h>
int main()
{
   int a[50],n,i,m;
   printf("enter array limit:");
   scanf("%d",&n);
   printf("enter array elements:");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   m=a[0];
   for(i=1;i<n;i++)
   { 
   if(a[i]>m)
   {
    m=a[i];
   }
   }
   printf("max=%d",m);
   return 0;
}
