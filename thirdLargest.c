#include<stdio.h>
int main()
{ 
 int i,n,j,temp;
 printf("Enter the array size: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the array elements: ");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 	for(j=i+1;j<n;j++)
 	{
   		if(a[i]>a[j])
   		{
   		 temp=a[i];
   		 a[i]=a[j];
   		 a[j]=temp;
   		}
   	}
  }
  printf("Third largest element is %d\t",a[n-3]);
   return 0;
}
 
