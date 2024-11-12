#include<stdio.h>

int main()
{ 
	int i,a[20],n,s,f=0;
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the array elemnts: ");
	for(i=0; i<n; i++)
	{ 
	  scanf("%d",&a[i]);
	}
	printf("enter an element to search: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
	  if(a[i]==s)
	  {
	    printf("%d found at %dth position",s,i);
	    f=1;
	  }
	  
	}
	if(f==0)
	{
	  printf("item not found");
	}
	return 0;	 
}


