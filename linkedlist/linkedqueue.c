	#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
	};

	int main()
	{
		struct node *top=NULL;
		struct node *rear=NULL;
		struct node *newnode;
		struct node *current=NULL;
		int op,count,flag,s;
		char ch;

		do
		{
		printf("Implementation of Queue using LinkedList");
		printf("\n1.insertion\n2.Deletion\n3.Display\n4.Search\nEnter your choice: ");
		scanf("%d",&op);
			switch(op)
			{
				case 1:
					newnode=malloc(sizeof(struct node));
					printf("\nEnter the data: ");
					scanf("%d",&newnode->data);
					newnode->next=NULL;
					if(top==NULL && rear==NULL)
					{
						top=newnode;
						rear=newnode;
					}
					else
					{
						rear->next=newnode;
						rear=newnode;
					}
					break;
				case 2:
					if(top==NULL && rear==NULL)
					{
						printf("\nQueue is empty");
					}
					else if(top==rear)
					{
						printf("\nThe node %d | %p has been deleted",top->data,(void*)top->next);
						free(top);
						top=NULL;
						rear=NULL;
					}
					else
					{
						current=top;
						printf("\nThe node %d | %p has been deleted",current->data,(void*)current->next);
						top=current->next;
						free(current);
					}
					break;
				case 3:
					if(top==NULL && 	rear==NULL)
					{
						printf("\nQueue is empty");
					}
					else
					{
						current=top;
						while(current!=NULL)
						{
							printf("\n %d | %p ",current->data,(void*)current->next);
							current=current->next;
						}	
					}
					
					break;
				 case 4:
						count=0;
						flag=0;
						printf("\nEnter the data value you want to search:");
						scanf("%d",&s);
						current=top;
						while(current!=NULL)
						{	
							count++;
							if(s==current->data)
							{
								printf("\n%d found at position %d ",current->data,count);
								flag=1;
							}
							current=current->next;newnode
						}           
						if(flag==0)
						{
							printf("\n%d not found at any position",s);
						}   
                		break;
				default:
					printf("\nINvalid input");
			}
		printf("\nDo you want to continue(y/n): ");
		scanf(" %c",&ch);
		}while(ch=='y' || ch=='Y');
		return 0;
	}
