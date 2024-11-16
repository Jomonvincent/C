#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
int main()
{
 struct node *head=NULL;
 char chdel;
 do{
 	int del;
 	struct node*current=head;
 	printf("\nDeletion in Linked List\n1.Delete from begining\n2.Delete from end\n3.Delete from specific position\n\nEnter your choice:");
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
				head=head->next;
				printf("\n%d | %p first node deleted",current->data,(void*)current->next);
				free(current);
			}
			break;
		case 2:
		    current=head;
			if(head==NULL)
			{
				printf("\nThe linked list is empty");
			}	
			else if(head->next==NULL)
			{
			    printf("\n%d | %p first node deleted",current->data,(void*)current->next);
			    free(head);
			    head=NULL;
			}
			else
			{
			  current=head;
			  while(current->next->next!=NULL)
			  {
				current=current->next;
			  }
			   printf("\n%d | %p last node deleted",current->next->data,(void*)current->next->next);
			  free(current->next);
			  current->next=NULL;
			}
			break;
		case 3:
		//check if linked lsit is empty
			if(head==NULL)
			{
				printf("\n The linked list is empty");
			}
			else
			{
			    
			    int k=1;
			    //traverse and display the nodes
				current=head;
				while(current!=NULL)
				{
					printf("\n%d : %d || %p ",k,current->data,(void *)current->next);
					current=current->next;
					k++;
				}
				//read the node you want to delete from  the user
				
				printf("\nWhich node do you want to delete(1-%d): ",k-1);
				scanf("%d",&del);
				if(del<1  || del>k-1)
				{
				    printf("\nInvalid input");
				}
				else
				{
    				current=head;
    				//handle the situation if the node to be deleted is the first node
    				if(del==1)
    				{
    				    printf("%d: %d | %p deleted from the linked list",del,current->data,(void *)current->next);
    				    head=current->next;
    				    free(current);
    				}
    				else
    				{
    				    current=head;
    				    struct node* prev=NULL;
    				    for(int i=1; i<del; i++)
    				    {
    				        prev=current;
    				        current=current->next;
    				    }
    				    prev->next=current->next;
    				    printf("\n%d: %d | %p has been deleted",del,current->data,current->next);
    				    free(current);
    				}
				}
			}
            break;
            default:
                printf("\nInvalid input");
	}  
	  printf("\nDo you want to continue(y/n): ");
	  scanf(" %c",&chdel);
   }while(chdel=='y' || chdel=='Y');
}