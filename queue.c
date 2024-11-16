//Program to implement queue operations
#include<stdio.h>
int main()
{
    int i,j,ch,n,front=-1,rear=-1;
    char op;
    printf("Enter the limit of the queue\n");
    scanf("%d",&n);
    int a[n];
    printf("Program to implement queue operation using\n");
     printf("\n 1.Enter element into the array\n 2.Delete element from the array\n 3.Display the array\n");
    do
    {
       printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        { 
            case 1:
                printf("Enter the value to be inserted: ");
                if (rear == n - 1) {
                    printf("Queue overflow\n");
                } else {
                    if (front == -1 && rear == -1) {
                        front = 0; // Setting front to 0 for the first element
                    }
                    rear++;
                    scanf("%d", &a[rear]);
                }
                break;
            case 2:
                printf("Delete value from queue\n");
                if(front==-1 && rear==-1)
                {
                    printf("Queue empty\n");
                }
                else 
                { 
                    int del=a[front];
                    front++;
                    printf("%d deleted from queue\n",del);
                    if (front>rear)
                    {
                        front=rear=-1;
                    }
                }
                break;
            case 3:
            if(front==-1 || front>rear)
            {
                printf("Queue is empty");
            }
            else
            {
                for(i=front;i<=rear;i++)
                { 
                    printf("%d\n",a[i]);
                }
            }
                break;
            default:
                printf("Invalid code");
        }
    printf("do you want to continue(y/n): ");
    scanf(" %c",&op);
    }while(op=='y' || op=='Y');
     return 0;
}