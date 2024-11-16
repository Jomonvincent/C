#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    char ch;
    struct node *head=NULL;
    struct node* newnode;
    struct node* current;
    do {
        int h;
        printf("\n0.Display\n1.Insertion at the begining\n2.Insertion at the end\n3.Insertion at any position\nWhat do you want to do: ");
        scanf("%d",&h);
        switch(h)
        {
            case 0:
            current=head;
                while(current!=NULL)
                {
                    printf("\n %d | %p",current->data,(void *)current->next);
                    current=current->next;
                    
                }
                break;
            case 1:
                    
              //insertion at the begining
                 newnode=malloc(sizeof(struct node));
                 printf("Enter the data element: ");
                 scanf("%d",&newnode->data);
                 newnode->next= head;
                 head=newnode;
                 printf("New node created at the begining(%p) \n%d has been successfully inserted\n ",(void*)newnode,newnode->data);
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
                int loc;
                int k=0;
                 if(head==NULL)//check if the list is empty
                {
                    printf("\nThe list is empty.\ninsertion only possible at position 1");
                    loc=1;
                }
                else
                {
                    while(current!=NULL)
                    {
                        
                        printf("position %d  :%d  |  %p \n",pos,current->data,(void*)current->next);
                        current=current->next;
                        pos++;
                    }
                    while(k==0)
                    {
                        
                        printf("\nWhere do you want to insert:");
                        scanf("%d",&loc);
                        if(loc<1 || loc>pos)
                        {
                            printf("\nInvalid input");
                            k=0;
                        }
                        else
                        {
                            newnode=malloc(sizeof(struct node));
                            k=1;
                        }
                    }
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
    scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    current=head;
    while(current!=NULL)
    {
        struct node* temp=current;
        current=current->next;
        free(temp);
    }
return 0;
}