#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct treenode
{
    int val;
    struct treenode*left;
    struct treenode*right;
}treenode;

treenode *create_node(int value)
{
    treenode* result=malloc(sizeof(treenode));
    if(result!=NULL)
    {
        result->left=NULL;
        result->right=NULL;
        result->val=value;
    }
    return result;
}

bool insert_node(treenode **rootptr,int value)                  //insertion logic using recursion
{
    treenode *root=*rootptr;
    if(root==NULL)
    {
        *rootptr=create_node(value);
        return true;
    }
    if(root->val==value)
        return false;
    if(value>root->val)
        return insert_node(&(root->right),value);        
    else
        return insert_node(&(root->left),value);
}

void print_tree(treenode *root,int level)                   //display logic using recursion
{
    if(root==NULL)
        return;
    print_tree(root->right,level+1);
    for(int i=0;i<level;i++)
    {
        printf("\t");
    }
    printf("%d\n",root->val);
    print_tree(root->left,level+1);
}

bool search(treenode *root,int value)
{
    if(root==NULL)
        return false;
    if(root->val==value)
        return true;
    else if(value>root->val)
        return search(root->right,value);
    else
        return search(root->left,value);
}

void traverse(treenode *root)
{
    if(root==NULL)
        return;
    printf("%d ",root->val);
    traverse(root->left);
    traverse(root->right);
}

int  main()
{
    int ch,value,sh;
    char in;
    treenode *root=NULL; 
    printf("1. Insert\n2. delete\n3.Search \n4. Traverse\n5. Exit");
    do{
        printf("\nenter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    do{
                        printf("\nEnter the value to insert : ");
                        scanf("%d",&value);
                        if(insert_node(&root,value))
                            printf("\n%d inserted successfully",value);
                        else
                            printf("\n%d already exist in tree",value);
                        printf("\ndo you want to enter another element(y/n): ");
                        scanf(" %c",&in);
                    }
                    while(in=='y'||in=='Y');
                    break;
            case 2:
                    print_tree(root,0);
                    break;
            case 3:
                    printf("Enter the value to search : ");
                    scanf("%d",&sh);
                    if(search(root,sh))
                        printf("\n%d found",sh);
                    else
                        printf("\n%d not found",sh);
                    break;
            case 4:
                    traverse(root);
                    break;
            case 5:
                    printf("exiting....");
                    break;
            default:
                    printf("\nInvalid choice");
        }
    }while(ch!=5);
    return 0;
}