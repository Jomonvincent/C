#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    char chin,chdel;
    struct node *head=NULL;
     struct node* newnode;
     do{
     	
	    do{
		 int in;
		 printf("\n1.Insertion at the begining\n2.Insertion at the end\n3.Insertion at any position\nWhat do you want to do: ");
		 scanf("%d",&h);
		 switch(h)
		 {
		     case 1:
		             
		       //insertion at the begining
		          newnode=malloc(sizeof(struct node));
		          printf("Enter the data element: ");
		          scanf("%d",&newnode->data);
		          newnode->next= head;
		          head=newnode;
		          printf("New node created at the begining(%d) \n%d has been successfully inserted\n ",newnode,newnode->data);
		          break;
		     case 2:
		                 //Inserion at the end
		           newnode=malloc(sizeof(struct node));
		           //allocate memory to newnode
		          printf("Enter the data element: ");
		          scanf("%d",&newnode->data);
		          newnode->next=NULL;
		                         
		         //checking where to connect new node
		         if(head==NULL)//checking if list is empty
		         {
		              head=newnode;
		         }
		         else//finding last node
		         {
		             struct node* current=head;
		             while(current->next!=NULL)
		             {
		                 current=current->next;
		             }

		             current->next=newnode;
		         }
		         printf("\n%d inserted at the  end\n",newnode->data);
		         break;
		     case 3:
		         struct node* current=head;
		         int pos=1;
		         while(current!=NULL)
		         {
		             
		             printf("position %d  :%d  |  %p \n",pos,current->data,(void*)current->next);
		             current=current->next;
		             pos++;
		         }
		         int loc;
		         printf("\nWhere do you want to insert:");
		         scanf("%d",&loc);
		         if(loc<1 ||loc>pos)
		         {
		             printf("\nInvalid input");
		             
		         }
		         else
		         {
		             newnode=malloc(sizeof(struct node));
		         }
		         
		         printf("Enter the the data you want to enter: ");
		         scanf("%d",&newnode->data);
		         if(loc==1)
		         {
		           newnode->next=head;
		           head=newnode;
		         }
		         else
		         {
		             current=head;
		             pos=1;
		             while(pos!=loc-1)
		             {
		                 current=current->next;
		                 pos++;
		             }
		                 
		             newnode->next=current->next;//link new node to previous node
		             current->next=newnode;//place newnode addresss to next part of previous node
		         }
		         break;                   
		     default:
		         printf("Invalid input");
		     
		 }
	    printf("\nDo you want to continue(y/n): ");
	    scanf(" %c",&chin);
	    }while(chin=='y' || chin=='Y');
	//Deletion in Linked List
	    do
	    {
	    	int del;
	    	printf("\nDeletion in Linked List\n1.Delete from begining\n2.Delete from end\nDelete from specific position\n\nEnter your choice:");
	    	scanf("%d",&del);
		switch(del)
		{
			case 1: //deletion from begining
				struct node* current;
				if()
				
				
		}
	    printf("\nDo you want to continue(y/n): ");
	    scanf(" %c",&chdel);
	    }while(chdel=='y' || chdel='Y')
	    
	    
	    
	    
	    
	    
	    
	}while(op=='y' || op=='Y');
	
    struct node* current=head;
    while(current!=NULL)
    {
        struct node* temp=current;
        current=current->next;
        free(temp);
    }
return 0;
}
