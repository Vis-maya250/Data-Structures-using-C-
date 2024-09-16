#include<stdio.h>
int main()
{
int n,i,x,count=0,time;
time++;
printf("enter th size of the array: ");
time++;
scanf("%d",&n);
time++;
int a[n];
printf("enter the elements of the array: ");
time++;

for (i=0;i<n;i++)
  {
    time++;
    scanf("%d",&a[i]);time++;
  }
  
time++;
printf("enter the element to search: \n");time++;
scanf("%d",&x);time++;

for(i=0;i<n;i++) 
  {
   time++;
      if(a[i]==x)
    {
       time++;
       count++;
       printf("\nelement is at %d",i+1);time++;
    }
   }
   
if(count>0)
 {
    printf("\nelement is found at %d times",count);time++;
 }
else
  {
    printf("element is not found");time++;
  }
printf("\nspace complexity %d",(4*4)+4*n);time+2;
printf("\ntime complexity %d",time);
return 0;
}
