#include <stdio.h>

int main()
{
   int a[3][3];
   int b[3][3];
   int c[3][3];
   int i,j;
   printf("enter first matrix:\n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
           {
              scanf("%d",&a[i][j]);
           }
   }
   printf("enter second matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       scanf("%d",&b[i][j]);
       }
   }
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
       {
        c[i][j]=a[i][j]-b[i][j];   
       }
  }
   printf("difference of both matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       printf("%d  ",c[i][j]);
       }
       printf("\n");
   }
    return 0;
}

