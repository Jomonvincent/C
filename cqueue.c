#include<stdio.h>

int main()
{
	int n,i,ch,front=-1,rear=n-1,in,temp;
	char c;
	printf("Enter the limit of the queue: ");
	int arr[n];
	do
	{
	
		printf("\nwhat do you want to do\n1.Insertion\n2.Deletion\n3.Display\nWhat do you want to do: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if((rear+1)%n==front)
				{
					printf("\nQueue is full");
				}
				else
				{
				    
	                       if(front==-1)
	                       {
			                  front++;
			                  rear++;
			                  printf("Enter the element you want to enter at front: ");
			                  scanf("%d",&arr[front]);
			         }
			         else
			         {
			         	rear=rear+1;
			          	printf("Enter the element you want to enter at front: ");
	                            scanf("%d",&arr[rear]);
	                       }
	                       printf("\n%d has been inserted at  position %d",arr[front],front);
	                     }
	                     break;             	  
	               case 2:
	                	if(front>rear || front==rear==-1)
	                	{
	                	 	printf("\n The queue is empty");
	                	}
	                	else
	                	{
	                		temp=arr[front];
	                	  	front++;
	                	  	printf("\n%d has been deleted from position %d",temp,front-1);
	                	}
				break;
			case 3:
				
				printf("\nElemets in the queue: ");
				for(i=front;i<rear;i++)
				{
					printf("\n%d",arr[i]);
				}
			default:
				printf("\nInvalid INput");

		}
		 printf("\n Do you want to continue(y/n):");
	 	 scanf(" %c",&c);
	}while(c=='y' || c=='Y');
	return 0;
}

