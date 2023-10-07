#include<stdio.h>
void main(){
  int n;
  printf("enter number:\n");
  scanf("%d",&n);
  int sum=0;
  while(n!=0){
     n=n/10;
     sum++;
  }
   printf("%d",sum);


}