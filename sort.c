#include<stdio.h>
int main()
{ 
 int i,n,j,temp,a[100];
 printf("Enter the array size: ");
 scanf("%d",&n);
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
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
