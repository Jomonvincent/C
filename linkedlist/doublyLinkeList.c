#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
int k=0;
struct node *head=NULL;
struct node *tail=NULL;
struct node *newnode;
struct node *current;
struct node *temp;


int display()
{
	int k=0;
	current=head;
	while(current!=NULL)
	{
		k++;
		printf("\n %d : %d | %p ",k,current->data,(void*)current->next);
		current=current->next;
	}
}
void insertion()
{
	int pos,loc,inop;
	printf("\n1.Insertion at begining\n2.Insertion at end\n3.Insertion at specific position\nEnter your choice: ");
	scanf("%d",&inop);
	newnode=malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nInefficent memory");
		return;
	}
	printf("\nEnter data: ");
	scanf("%d",&newnode->data);
	switch(inop)
	{
		case 1:
			if(head==NULL)
			{
				head=tail=newnode;
				newnode->next=NULL;
				newnode->prev=NULL;
			}
			else
			{
				head->prev=newnode;
				newnode->next=head;
				head=newnode;
				newnode->prev=NULL;
			}
			printf("\n %d | %p inserted at the begining",head->data,(void *)head->next);
			break;
		case 2:
			if(head==NULL)
			{
				head=tail=newnode;
				newnode->next=NULL;
				newnode->prev=NULL;
			}
			else
			{
				tail->next=newnode;
				newnode->prev=tail;
				tail=newnode;
				newnode->next=NULL;
			}
			printf("\n %d | %p inserted at the begining",tail->data,(void *)tail->next);
			break;
		case 3:
		    display();
			if(head==NULL)
			{
				head=tail=newnode;
				newnode->prev=NULL;
				newnode->next=NULL;
				printf("The linked list is empty\ninseriton only possible at first position,\nAutomatically inserted %d at the first position",newnode->data);
			}
			else
			{
				printf("\nEnter the position of the node you want to insert:");
				scanf("%d",&loc);
				if(loc<1)
				{
				    printf("\nInvalid position. Position must be 1 or greater");
				    return;
				}
				if(loc==1)
				{
				    newnode->next=head;
				    newnode->prev=NULL;
				    head->prev=newnode;
				    head=newnode;
				}
				else
    			{
    				current=head;
    				pos=1;
    				while(current->next!=NULL && pos!=loc-1)
    				{
    					current=current->next;
    					pos++;
    				}
    			    newnode->next=current->next;
    			    newnode->prev=current;
    			    if(current->next==NULL)
    			    {
    			        tail=newnode;
    			    }
    			    else
    			    {
    			        current->next->prev=newnode;
    			    }
    			    current->next=newnode;
    			}
    			printf(" %d | %p inserted at position %d ",newnode->data,(void *)newnode->next,loc);
			}
            break; 
		default:
			printf("\nInvalid choice");	
	}
}
void deletion()
{
	int delop,pos,loc;
	printf("\n1.Deletion at begining\n2.Deletion at the end\n3.deletion at the specific position\nEnter your choice: ");
	scanf("%d",&delop);
	switch(delop)
	{
		case 1:
		    if(head==NULL)
		    {
		        printf("\nDLL is empty");
		    }
		    else
		    {
    			current=head;
    			head=head->next;
    			if(head!=NULL)
    			{
    			    head->prev=NULL;
    			}
    			else
    			{
    			    tail=NULL;
    			}
		    	printf("\n1st node %d | %p deleted from the DLL",current->data,(void*)current->next);
			    free(current);
		    }
			break;
		case 2:
		    if(tail==NULL)
		    {
		        printf("\nThe DLL is empty");
		    }
		    else
		    {
		        current=tail;
    			tail=tail->prev;
    			if(tail!=NULL)
    			{
    			    tail->next=NULL;
    			}
    			else
    			{
    			    head=NULL;
    			}
    			printf("\nlast node %d | %p deleted from the DLL",current->data,(void*)current->next);
    			free(current);
		    }
			
			break;
		case 3:
		    if(head==NULL)
		    {
		        printf("\nThe DLL is empty");
		    }
		    else
		    {
    			printf("\nEnter the position of the node you want to delete: ");
    			scanf("%d",&loc);
    			pos=1;
    			if(loc<1)
    			{
    			    printf("\nInvalid position");
    			    return;
    			}
        		else
        		{
        			current=head;
        			while(current!=NULL && pos<loc)
        			{
        				current=current->next;
        				pos++;
        			}
        			if(current==NULL)
        			{
        			    printf("\nInvalid position, enter a valid position between 1-%d",pos-1);
        			}
        			else 
        			{
        			    if(current==head)
        			    {
        			        head=current->next;
        			        if(head!=NULL)
        			        {
        			            head->prev=NULL;
        			        }
        			        free(current);
        			    }
        			    else
        			    {
        			        temp=current;
        			        if(current->prev!=NULL)
        			        {
        			            current->prev->next=current->next;
        			        }
        			        if (current->next != NULL)
        			        {
                                current->next->prev=current->prev;
                            }
                            free(temp);
        			    }
        			}
    		    }
		    }
    			break;
		default:
			printf("\nInvalid option");
	}
}

void updation()
{
	int uploc,updata,k=1,pos=1;
	if(head==NULL)
	{
		printf("\nDLL is empty,updation not possible");
	}
	else
	{
		current=head;
		while(current!=NULL)
		{
			printf("\n%d : %d | %p ",k,current->data,(void *)current->next);
			current=current->next;
			k++;
		}
		printf("\nEnter the position of the node you want to update: ");
		scanf("%d",&uploc);
		if(uploc>=1 && uploc<k)
		{
			printf("\nEnter the new data:");
			scanf("%d",&updata);
			current=head;
			while(current!=NULL)
			{
				if(pos==uploc)
				{
					current->data=updata;
					printf("\nnode at position %d updated to %d",uploc,updata);
					return;	
				}
				current=current->next;
				pos++;
			}
		}
		else
		{
			printf("\nInvalid position ,please enter a valid position(1-%d)",k-1);	
		}
	}
}

int search(int sh)
{
	int pos=1;
	int found=0;
	current=head;
	while(current!=NULL)
	{
		if(sh==current->data)
		{
			printf("%d found at %d th posiiton",sh,pos);
			found=1;
		}
		current=current->next;
		pos++;
	}
	if(!found)
	{
		printf("\n %d not found in DLL",sh);
	}
	return 0;
}

int main()
{
	int op,inop,indel,inup,sh;
	char ch;
	printf("\nDoubly LinkedList");
	do
	{
		printf("\n1.insertion\n2,Deletion\n3.Updation\n4.Display\n5.Search");
		printf("\nEnter your choice: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				updation();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("\nEnter the value you want to search:");
				scanf("%d",&sh);
				search(sh);
				break;	
			default:
				printf("\nInvalid input");	
		}
	printf("\nDo you want to continue(y/n):");
	scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
return 0;
}