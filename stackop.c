//implementation of stack operations using an array
#include<stdio.h>
int peek(int top,int a[]);
int main()
{ 
  int n,top,i,del,op;
  char ch;
  printf("Enter the limit max size of the stack: ");
  scanf("%d",&n);
  int a[n];
  top=-1;
  printf("choose an option\n1.insert an element\n2.Delete an element\n3.Display stack elements\n4.Peek");
  	printf("\n");
  do
  { 
  	printf("\nEnter you choice:");
  	scanf("%d",&op);
  	switch(op)
  	{ 
  	  case 1:
  	  	if(top==n-1)
  	  	{ 
  	  	printf("stack overflow\n");
  	  	}
  	  	else
  	  	{
  	  	  top++;
  	  	  printf("Enter the number you want to insert:");
  	  	  scanf("%d",&a[top]);
  	  	}
  	  	break;
  	  case 2:
  	  	if(top==-1)
  	  	{ 
  	  	  printf("stack underflow(stack is empty\n)");
  	  	}
  	  	else
  	  	{ 
  	  	  del=a[top];
  	  	  top--;
  	  	  printf("%d deleted from the stack\n",del);
  	  	}
  	  	break;
  	  case 3:
  	  	for(i=0;i<=top;i++)
  	  	{
  	  	   printf("%d\t",a[i]);
  	  	}
  	  	break;
  	  case 4:
  	  	peek( top, a);
  	  	break;
  	  default:
  	  	printf("Invalid input");
	  	
	  }
   printf("\ndo you want to continue(y/n):");
   scanf(" %c",&ch);  
  }while(ch=='y' || ch=='Y');
  return 0;
}
int peek(int top,int a[top])
{
	if(top==-1)
	{ 
	  printf("Stack is empty");
	}
	else
	{
	  printf("The element at the top: %d",a[top]);
	}
}

















