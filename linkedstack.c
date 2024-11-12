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
/*int search(s);*/
int main()
{
	
	int op;
	char ch;
	printf("\nStack Implementation Using Linkedlist");
	do
	{
		printf("\n1.Insertion(push)\n2.Deletion(pop)\n3.Display\n4.Search");
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
		 	/*case 4:
		 		 search(s);
		 		 break;*/
		 	default:
		 		printf("\nInvalid input, please enter a value from 1-4");
		 		 
		}
	printf("\ndo you want to continue(y/n): ");
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
	{	newnode->next=top->next;	
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
		free(top->next);
		top=NULL;
	}
	else
	{
		current=top;
		top=top->next;
		printf("\n%d | %p has been poped from the stack",current->data,(void *)current->next);
		free(current);
	}
}
int display()
{
	current=top;
	while(current->next!=NULL)
	{
		printf("\n%d | %p has been poped from the stack",current->data,(void *)current->next);
		current=current->next;
	}
}















