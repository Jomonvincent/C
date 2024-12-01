#include<stdio.h>
#include<stdlib.h>
struct node		//define structure of node
{
	int data;
	struct node *next;
};


int update(struct node* head,int pos, int newdata)	//defining different update funtions
{
	int loc=1;
	struct node  *current=head;
	while(current!=NULL)
	{
		if(loc==pos)
		{
			int temp;
			temp=current->data;
			current->data=newdata;
			printf("The node data has been updated from %d to %d ",temp,newdata);
			break;
		}
		else
		{
		current=current->next;
		loc++;
		}
	}
	printf("\n\nUpdated Linked List\n");
    current = head;
    int i=1;
    while (current != NULL) 
    {
        printf("\n%d : %d |%p", i, current->data, (void*)current->next);
        current = current->next;
        i++;
    }

	return 0;
};

int main()
{
	struct node* head=NULL;
	struct node* current;
	struct node *newnode;
	int k=1;
	while(k!=5)
	{
		newnode=malloc(sizeof(struct node));
		printf("\nEnter the data of the %d node: ",k);
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=newnode;
			newnode->next=NULL;
		}
		else
		{
			current=head;
			while(current->next!=NULL)
			{
				current=current->next;
			}
			current->next=newnode;
			newnode->next=NULL;
		}
		k++;
	}
	int i=1,pos,newdata;
	printf("\nProgram to Implement Linked List Updation");
	current=head;
	while(current!=NULL)												//display the current list
	{
		printf("\n%d : %d |%p",i,current->data,(void*)current->next);
		current=current->next;
		i++;
	}
	printf("\nEnter the position of the node you want to update: ");	//get the position from user
	scanf("%d",&pos);
	if(pos>=1 && pos<i)
	{
	    printf("\nEnter the new data value: ");								//get the data form user
	    scanf("%d",&newdata);
    	update(head,pos,newdata);
	}
	else
	{
	    printf("\n Invalid input");
	}
	return 0;
}
