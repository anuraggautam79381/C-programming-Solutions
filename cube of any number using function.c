#include<stdio.h>
void printcube(int n);

int main()
{
int n;
printf("enter number:\n");
scanf("%d",&n);
printcube(n);
return 0;
}

void printcube(int n)
{
   printf("cube of n is:%d\n",n*n*n); 
}












