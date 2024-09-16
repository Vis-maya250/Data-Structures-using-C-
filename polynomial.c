#include<stdio.h>
struct poly
{
  int coeff;
  int exp;
};
void main()
{
  int n,i;
prinf("Enter the number of terms: "0;
scanf("%d",&n);
struct poly x[n];
printf("Enter the terns in the polynomial: ");
for(i=0;i<n;i++)
{
  printf("Coefficient %d: ",i+1);
  scanf("%d",&x[i].coeff);
  printf("Exponenet %d: "i+1);
  scanf("%d",&x[i].exp);
}
printf("Polynomial is: \n);
  for(i=0;i<n;i++)
  {
    printf("(%dx^%d)",x[i].coeff,x[i].exp);
    if(i<n-1)
    {
      printf("+");
      }
      }
      }
      
    
