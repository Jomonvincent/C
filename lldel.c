#include<stdio.h>
struct node
{
int data;
struct node*next;
}
int main()
{
struct node*head;
 char chdel;
 do{
 	int del;
 	struct node*current=head;
 	printf("\nDeletion in Linked List\n1.Delete from begining\n2.Delete from end\nDelete from specific position\n\nEnter your choice:");
	scanf("%d",&del);
	switch(del)
	{
		case 1:
			current=head;
			if(head==NULL)
			{
				printf("\nThe linked list is empty");
			}	
			else
			{
				current=current->next;
				head=current;
				printf("\n%d | %p first node deleted",current->data,(void*)current->next);
				free(current);
			}
			break;
		case 2:
			if(head==NULL)
			{
				printf("\nThe linked list is empty");
			}	
			else if(head->next==NULL)
			{
				printf("%d || %p first node deleted",head->data,(void*)head->next);
				current=
			}
			else
			{
			  current=head;
			  while(current->next->next!=NULL)
			  {
				current=current->next;
			  }
			  free(current->next);
			   current->next=NULL;
			}
			break;
		case 3:
			if(head==NULL)
			{
				printf("\n The linked list is empty");
			}
			else
			{
				current=head;
				while(current->next!=NULL)
				{
					int k=1;
					printf("\n%d : %d || %p ",k,current->data,(void *)current->next);
					current=current->next;
					k++;
				}
				int del;
				printf("Which node do you want to delete : ");
				scanf("%d",&del);
				current=head;
				k=1
				if(current->next==NULL)
				{
					head=currem
				}
				while(current->next!=NULL)
				{
				 	
					
			}
 
	  printf("\nDo you want to continue(y/n): ");
	  scanf(" %c",&chdel);
   }while(chdel=='y' || chdel='Y');
}
