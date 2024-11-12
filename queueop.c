#include<stdio.h>
int main()
{
	int i,n,front,rear,ch,del;
	char c;
	printf("Enter the size of queue:");
	scanf("%d",&n);
	int a[n];
	front=-1;
	rear=-1;
	printf("\nWhat do you want to do \n1.insert element into queue\n2.Delete element from queue\n3.Display queue\n");
	do
	{ 
	   printf("\nWhat do you want to do: ");
	   scanf("%d",&ch);
	   switch(ch)
	   {
		case 1:
			if(rear==n-1)
			{
			   printf("\nQueue overflow\n");
			}	
			else if(front==-1)
			{
			   front++;
			   rear++;
			   printf("\nenter the element:");
			   scanf("%d",&a[rear]);
			}
			else
			{
			    rear++;
			    printf("\nEnter the element:");
			    scanf("%d",&a[rear]);
			}
			break;
		 case 2:
		 	if(front==-1 && rear==-1 )
		 	{
		 	    printf("\nQueue Empty\n");
		 	}
		 	else if(front!=rear && rear>-1)
		 	{ 
		 	    del=a[front];
		 	    front++;
		 	    printf("\n%d deleted from the queue\n",del);
		       }
		       else if(front==rear)
		       {
		           del=a[front];
		           front==-1;
		           rear==-1;
		           printf("\n%d deleted from queue\n",del);	 
		       }
		       break;
		 case 3:
		 	 if(front==-1 && rear==-1)
		 	 {
		 	 	printf("\n Queue is empty");
		 	 }
		 	 else
		 	 {
		 	    for(i=front;i<=rear;i++)
		 	    {
		 	    	printf("%d\n",a[i]); 
		 	    }
		 	 }
		 	break;
		 default:
		 	
		 	    printf("\nInvalid input\n	");
		      
	   }
	 printf("\n Do you want to continue(y/n):");
	 scanf(" %c",&c);
	}while(c=='y' || c=='Y');
}


