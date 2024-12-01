#include<stdio.h>
#include<stdlib.h>
struct node		//define structure of node
{
	int data;
	struct node *next;
};
int main()
{
    printf("\nProgram to Implement Linked List Updation");

    //creat all the necessary nodes

	struct node* head=NULL;
	struct node* current;
	struct node *newnode;
	int k=1,i=1,pos,newdata,loc=1;

    //create 4 node for testing upadion()

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

    //display the current list

	current=head;
	while(current!=NULL)												
	{
		printf("\n%d : %d |%p",i,current->data,(void*)current->next);
		current=current->next;
		i++;
	}

    //get the position from user

	printf("\nEnter the position of the node you want to update: ");	
	scanf("%d",&pos);

    //check if the entered position is valid or not

	if(pos>=1 && pos<i)
	{
	    printf("\nEnter the new data value: ");								
	    scanf("%d",&newdata);
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
    }
	else
	{
	    printf("\n Invalid input");
	}
	return 0;
}
