//Program to implement queue using array with functions
#include<stdio.h>
int enqueue(int n, int arr[]);
int dequeue(int n, int arr[]);
int peek(int n, int arr[]);
int display(int n, int arr[]);
int rear =-1;
int front=0;
int main()
{
    int n,ch;
    char c;
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    int arr[n];
    printf("\nQueue Operations\n1.Insertion\n2.Deletion\n3.Display\n4.Peek\n");
    do{
        printf("\nWhat do you want to do: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue(n,arr);
                break;
            case 2:
                dequeue(n,arr);
                break;
            case 3:
                display(n,arr);
                break;
            case 4:
                peek(n,arr);
                break;
            default:
                printf("\nInvalid input");
        }
      printf("\nDo you want to continue(y/n):");  
      scanf(" %c",&c);
      if(c!='y' && c!='Y')
      {
          printf("\nInvalid input");
      }
    }while(c=='y' || c=='Y');
    return 0;
}

//insertion  in queue
int enqueue(int n ,int arr[])
{
    if(rear==n-1)
    { 
        printf("\nQueue is full");
    }
    else
    {
        rear++;
        printf("\nEnter the element you want to insert: ");
        scanf("%d",&arr[rear]);
    }
    return arr[rear];
}

//deletion in queue
int dequeue(int n,int arr[])
{
    if(front>rear)
    {
        printf("\nQueue is empty\n");
        return -1;
    }
    else
    {
        int del=arr[front];
        front++;
        printf("\n %d has been deleted",del);
    }
    return 0;
}

//peek in queue(return the the top value)
int peek(int n,int arr[])
{
    if(front<=rear)
    {
        printf("\n Element at the top: %d ",arr[front]);
    }
    else
    {
        printf("\nQueue is empty");
    }
    return 0;
}

//display queue
int display(int n,int arr[])
{
    if(front>rear)
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\nElements in the queue :");
         for(int i=front; i<=rear; i++)
         {
             printf("%d\t",arr[i]);
         }
    }
    return 0;
}
