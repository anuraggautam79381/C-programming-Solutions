#include<stdio.h>
void main(){
  int a,b,rem;
  printf("enter first numbers:\n");
  scanf("%d",&a);
  printf("enter second numbers:\n");
  scanf("%d",&b);
  while(a%b>0)
  {
     rem=a%b;
     a=b;
     b=rem;
  }
printf("HCF IS %d",b);


}