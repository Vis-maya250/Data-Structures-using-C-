#include<stdio.h>
int en_queue(int queue[],int rear,int n)
{
  int(rear>=n-1)
{
 printf("Queue Overflow");
}
else
{
int item;
printf("Enter item to be inserted: ");
scanf("%d",&item);
rear++;
queue[rear]=item;
printf("%d inserted\n",item);
}
return rear;
}
int de_queue(int queue[],int rear,int front)
{
 if(front>rear)
{
 printf("Queue Underflow\n");
}
else
{
printf("Deleted item is %d\n",queue[front]);
front++;
}
void display(int queue[],int front,int rear)
{
   if(front>rear)
{
 printf("Queue is empty");
}
else
{
 printf("Queue is:\n");
for(int i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
printf("\n");
}
}
int main()
{
  int n,option,front=0,rear=-1;
  char ch='y';
  printf("Enter the size of the queue: ");
  scanf("%d",&n);
  int queue[n];
  do
{
  printf("Queue Operations");
  printf("\n1. Enqueue");
  printf("\n2. Dequeue");
  printf("\n3. Display");
  printf("\n1Enter your choice: ");
  scanf("%d",&option);
  switch(option)
{
case 1:
  rear=en_queue(queue,rear,n)
  break;
case :
  front=de_queue(queue,front,n)
  break;
display(queue,front,rear)
break;
default;
printf("\ninvalid option\n");
printf("\n Do you want to continue?(Y/N): ");
getchar();
scanf("%c",&ch);
}
while(ch=='Y'||ch=='y');
printf("\nExiting\n");
return 0;
}



