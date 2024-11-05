#include<stdio.h>
int main()
{
  int m,n,i,j,k=1;
  int a[100][100],c[100][3];
  printf("enter the order of the matrix= ");
  scanf("%d%d",&m,&n);
  printf("enter the matrix elemeb=nts: ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
      }}
      printf("entered matrix is:\n");
      for(i=0;i<m;i++)
      {
       for(j=0;j<n;j++)
       {
         printf("%d\t",a[i][j]);
         }
         printf("\n");
         }
         c[0][0]=m;
         c[0][1]=n;
         for(i=0;i<m;i++)
         {
         for(j=0;j<n;j++)
         {
           if(a[i][j]!=0)
           {
            c[k][0]=i;
            c[k][1]=j;
            c[k][2]=a[i][j];
            k++;}}
            c[0][2]=k-1;
            printf("row col value\n");
            for(i=0;i<k;i++)
            {
             for(j=0;j<3;j++)
             {
               printf("%d\t",c[i][j]);
               }
               printf("\n");
               }}}
