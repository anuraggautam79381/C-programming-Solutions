#include<stdio.h>
void main(){
  int a,b,i;
  printf("enter first numbers:\n");
  scanf("%d",&a);
  printf("enter second numbers:\n");
  scanf("%d",&b);
  for(i=1;i<=a*b;i++)
  {
     if(i%a==0 && i%b==0)
      break;
  }
  printf("LCM IS %d",i);

}