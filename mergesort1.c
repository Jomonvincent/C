#include<stdio.h>
int sort(int x ,int y[x]);
int main()
{
    int i,n,m,k;
    printf("merge and sort two array\n");
    
    //read first array
    printf("enter the limit of first array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    //read second array
    printf("enter the limit of second array : ");
    scanf("%d",&m);
    int b[m];
    printf("Enter the array elements:\n");
    for(i=0;i<m;i++)
    { 
        scanf("%d",&b[i]);
    }
    sort(n,a);
    sort(m,b);
    k=n+m;
    int c[k];
    
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<m;i++)
    {
        c[n+i]=b[i];
      
    }
    printf("merged array:");
     for(i=0;i<k;i++)
     { 
         printf("%d\t",c[i]);
     }
     printf("\nmerged & sorted array:");
     sort(k,c);
     return 0;
}
int sort(int x ,int y[x])
{
     int i=0,temp,j;
     for(i=0;i<x;i++)
     {
          for(j=i+1;j<x;j++)
          {
              if(y[j]>y[i])
              {
                  temp=y[i];
                  y[i]=y[j];
                  y[j]=temp;
              }
          }
     }
     for(i=0;i<x;i++)
     { 
         printf("%d\t",y[i]);
     }
     printf("\n");
     return 0;
}
