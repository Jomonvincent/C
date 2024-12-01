#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node *next;
};
struct node*top=NULL;
struct node* newnode;
struct node* current;
int push();
int pop();
int display();
int search(int sp);
int searchvalue(int sv);
int main()
{
	
	int op,sp,sv;
	char ch;
	printf("\nStack Implementation Using Linkedlist\n");
	do
	{
		printf("\n1.Insertion(push)\n2.Deletion(pop)\n3.Display\n4.Search by position\n5.Search by value");
		printf("\nSelect the operation you want to perform: ");
		scanf("%d",&op);
		switch(op)
		{
		 	case 1:
		 		push();
		 		break;
		 	case 2:
		 		pop();
		 		break;
		 	case 3:
		 		display();
		 		break;
		 	case 4:
		 		printf("\nSearch by position");
		 	    printf("\nEnter the postion of the node you want to search:");
		 	    scanf("%d",&sp);
		 		search(sp);
		 		break;
		 	case 5:
		 		printf("\nSearch by value");
		 		printf("Enter the data value you want to search: ");
		 		scanf("%d",&sv);
		 		searchvalue(sv);
		 		 break;
		 	default:
		 		printf("\nInvalid input, please enter a value from 1-4");
		 		 
		}
	printf("\n\ndo you want to continue(y/n): ");
	scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
 	return 0;
}
int push()
{
	newnode=malloc(sizeof(struct node));	//allocate memory for the neew node
	printf("\nEnter the data value: ");		//read data from the user
	scanf("%d",&newnode->data);
	if(top==NULL)					//handle it when satck is empty
	{
		top=newnode;
		newnode->next=NULL;
	}
	else						//handle it when satck has elemenets
	{
	    newnode->next=top;	
		top=newnode;
		
	}
	printf("\n%d | %p has been pushed into satck",newnode->data,(void *)newnode->next);
	return 0;
	
}

int pop()
{
	if(top==NULL)
	{
		printf("\nStack is empty");
	}
	else if(top->next==NULL)
	{
	    	printf("\n%d | %p has been poped from the stack",top->data,(void *)top->next);
		free(top);
		top=NULL;
	    printf("\nStack has been emptied");
	}
	else
	{
		current=top;
		top=current->next;
		printf("\n%d | %p has been poped from the stack",current->data,(void *)current->next);
		free(current);
	}
}
int display()
{
    int i=1;
    if(top==NULL)
    {
        printf("\nThe stack is empty");
    }
    else
    {
    	current=top;
    	printf("\n");
    	int i=1;
    	while(current!=NULL)
    	{
    		printf("\n %d: %d | %p  ",i,current->data,(void *)current->next);
    		i++;
    		current=current->next;
    	}
    }
}

int search(int s)
{
    current=top;
    int i=1;
    while(current!=NULL)
    {
        if(s==i)
        {
            printf("The node at position %d has been found: %d | %p",i,current->data,current->next);
            return 0;
        }
        current=current->next;
        i++;
    }
    printf("\nNode not found at position %d",s);
    return 0;
}

int searchvalue(int sv)
{
	current=top;
	int f=0;
	while(current!=NULL)
	{
		if(sv==current->data)
		{
			printf("\nSearched value found at %d | %p",current->data,current->next);
			f++;
		}
		current=current->next;
	}
	if(f==0)
	{
		printf("%d not found in the stack",sv);
	}
	return 0;
}













