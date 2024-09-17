#include<stdio.h>
int  main()
{
   int n,x,flag=0,i,t;
   int right,left=0,mid=0;
   printf("enter the size of the array; ");t++;
   scanf("%d",&n);t++;
   int a[n];
   printf("\nenter the elements of the array: ");t++;
   for(i=0;i<n;i++)
   {
     t++;t++;
     scanf("%d",&a[i]);
    }
    printf("\nenter the element to be search: ");t++;
    scanf("%d",&x);t++;
    
    while(left<=right)
    {
    mid=(left+right)/2;
    t++;t++;
    if(x==a[mid])
    {
     flag=1;t++;
     break;
    }
     else if(x>a[mid])
    {
     left=mid+1;t++;
    }
     else if(x<a[mid])
    {
     right=mid-1;
    }
    
    if(flag==0)
    {
     printf("element not found");t++;
     }
    else if(flag==1)
    {
     printf("element found");t++;
    }
    printf("\nspace complexity%d",(4*8)+4*n);t+2;
    printf("\ntime com[lexity%d",t);
    }
}   
