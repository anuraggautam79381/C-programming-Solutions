#include<stdio.h>
void main()
{
  int a[3][3],i,j,n;
  printf("enter the matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
  printf("enter number to multiply:\n");
  scanf("%d",&n);
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        a[i][j]=n*a[i][j];
    }
  }
  printf("scalar multiplication of matrix is:\n");
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d  ",a[i][j]);
    }
    printf("\n");
  }












}