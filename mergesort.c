#include<stdio.h>
int sort(int n,int a[]);
int main()

{ 
	int i,n,m,o; 
	printf("Enter two unsorted array\n");
	printf("Enter the limit of first array: ");
	scanf("%d",&n);
	printf("Enter the limit of second array: ");
	scanf("%d",&m);
	o=n+m;
	int a[n],b[m],c[o];
	printf("Enter the first array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the second array elements:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(n,a);
	sort(m,b);
	for(i=0;i<n;i++)
	{ 
	  c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
	  c[i+n]=b[i];
	}
	sort(o,c);
	return 0;
}
int sort(int n, int a[])
{
  int i=0,k,temp;
  for(i=0;i<n;i++)
  {
    for(k=i+1;k<n;k++)
    {
  	if(a[i]>a[k])
  	{
  	 	temp=a[i];
  	 	a[i]=a[k];
  	 	a[k]=temp;
  	}
    }
  }
  printf("\nsorted array:\n");
  for(i=0;i<n;i++)
  {
	printf(" %d \t",a[i]);
  }
  return 0;
}
  

