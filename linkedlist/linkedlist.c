#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main()
{
    int ch,del;
    char chin,chdel,op,chup;
    struct node *head=NULL;
    struct node *newnode;
    struct node *current;
     do{
        printf("\n1.Insertion\n2.Deletion\n3.Updation\n4.Display\nChoose an option:");
        scanf("%d",&ch);
     	switch(ch)
        {
            case 1:     //Insertion
                    do 
                    {
                    int h;
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
                            current=head;
                            int loc,pos=1,k=0;
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
                    printf("\nDo you want to continue inserting(y/n): ");
                    scanf(" %c",&chin);
                    }while(chin=='y' || chin=='Y');
                    break;
            case 2:             //Deletion
                    do{
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
                    printf("\nDo you want to continue deletting(y/n): ");
                    scanf(" %c",&chdel);
                }while(chdel=='y' || chdel=='Y'); 
                break;
            case 3:             //Updation
                if(head==NULL)
                {
                    printf("\ncan't perform updation ,the linked list is empty ");
                }
                else
                {
                   do
                   {
                       int i=1,pos,newdata,loc=1;
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
                printf("\ndo you want to continue updating(y/n):");
                scanf(" %c",&chup);
                }while(chup=='Y' || chup=='y');
            }
              break;
        case 4:
                if(head==NULL)
                {
                    printf("\nLinked list is empty");
                }
                else
                {
                    current=head;
                    while(current!=NULL)
                    {
                        printf("\n %d | %p",current->data,(void *)current->next);
                        current=current->next;
                                    
                    }
                }
                break;                  
        default:
                printf("Invalid choice\n");
        }
        printf("\ndo you want to continue (y/n):");
        scanf(" %c",&op);
	}while(op=='y' || op=='Y');

    current=head;
    while(current!=NULL)
    {
        struct node* temp=current;
        current=current->next;
        free(temp);
    }
return 0;
}