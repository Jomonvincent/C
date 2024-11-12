#include<stdio.h>

int main()
{
	int n,i,ch,front=-1,rear=-1,temp;
	char c;
	printf("Enter the limit of the queue: ");
	scanf("%d",&n);
	int arr[n];
	do
	{
	
		printf("\nOperations in circular queue\n1.Insertion(enqueue)\n2.Deletion(dequeue)\n3.Display\nEnter your choice: ");
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
			                  front=rear=0;
			                  printf("Enter the element you want to insert: ");
			                  scanf("%d",&arr[rear]);
			         }
			         else
			         {	
			         	rear=(rear+1)%n;
			          	printf("Enter the element you want to insert: ");
	                            scanf("%d",&arr[rear]);
	                       }
	                       printf("\n%d has been inserted at  position %d",arr[rear],rear);
	                     }
	        
	                     break;             	  
	               case 2:
	                	if(front==-1)
	                	{
	                	 	printf("\n The queue is empty");
	                	}
	                	else
	                	{
	                		temp=arr[front];
	                		if(front==rear)
	                		{
	                			printf("\n%d has been deleted from position %d",temp,front);
						front=-1;
						rear=-1;
					}
					else
					{
						printf("\n%d has been deleted from position %d",temp,front);
						front=(front+1)%n;
					}
	                	}
				break;
			case 3:
				if(front==-1 )
				{
					printf("\nQueue is empty");
				}
				else
				{
					printf("\nElemets in the queue: ");
					for(i=front;i!=rear;i=(i+1)%n)
					{
						printf("\t%d",arr[i]);
					}
						
					printf("\t%d", arr[rear]);
				}

				break;
			default:
				printf("\nInvalid INput");

		}
		 printf("\n Do you want to continue(y/n):");
	 	 scanf(" %c",&c);
	}while(c=='y' || c=='Y');
	return 0;
}
