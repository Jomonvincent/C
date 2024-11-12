#include<stdio.h>
int main()
{
	int i,n,m,s;
	printf("Eneter the array limit: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=1;i<n;i++)
	{
		if(m<a[i])
		{
		 	m=a[i];
		}
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
	  if(s>a[i])
	  {
	   	s=a[i];
	  }
	}
	printf("largest element:%d\n",m);
	printf("Smallest element:%d",s);
}
		 	
