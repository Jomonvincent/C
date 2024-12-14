#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode;
struct node *root=NULL;
struct node *parent=NULL;
struct node *current;

void bfs_insertion()
{
    newnode=malloc(sizeof(struct node));
    printf("\nEnter the data:");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
        printf("\n%d node inserted as the root node",root->data);
    }   
    else
    {
        current=root;
        while(current!=NULL)
        {
            parent=current;
            if(newnode->data>=current->data)
            {
                current=current->right;
            }
            else
            {
                current=current->left;
            }
        }   
        if(newnode->data>=parent->data)
        {
            parent->right=newnode;
            printf("\nNew node %d inserted to the right of node %d",newnode->data,parent->data);
        }
        else
        {
            parent->left=newnode;
            printf("\nNew node %d inserted to the left of node %d",newnode->data,parent->data);
        }
        
    }    
};
void display(struct node *current)
{
    if(current!=NULL)
    {
        display(current->left);
        printf("\t\n%d ",current->data);
        display(current->right);    
    }
    
};
int main()
{
    int op;
    char ch;   
    printf("BFS");
    do{
            printf("\n1.Insertion\n2.Display\nEnter your choice: ");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                    bfs_insertion();
                    break;
            case 2:
                    display(root);  
                    break;
            default:
                    printf("\nInvalid choice");
        }
        printf("\nDo you want to continue(y/n):");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
    return 0;
}