#include<stdio.h>
int main()
{
   int a[50],n,i,j,temp;
   printf("enter array limit:");
   scanf("%d",&n);
   printf("enter array elements:");
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
   { 
     for(j=i+1;j<n;j++)
     {
      	if(a[j]>a[i])
      	{
     	temp=a[i];
     	a[i]=a[j];
     	a[j]=temp;
     	}
     }
   }
   for(i=0;i<3;i++)
   {
     printf("%d\t",a[i]);
   }  
   return 0;
}
