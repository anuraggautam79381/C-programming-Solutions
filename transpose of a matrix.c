#include<stdio.h>
void main()
{
  int a[3][3],i,j;
  int b[3][3];
  printf("enter the matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
  }
   for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        b[j][i]=a[i][j];
    }
  }
  printf("transpose of a matrix is:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d  ",b[i][j]);
    }
    printf("\n");
  }













}