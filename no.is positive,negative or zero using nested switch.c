#include<stdio.h>
void main(){
  int a;
  printf("enter the number:\n");
  scanf("%d",&a);
    switch(a>0){
    case 1:printf("positive\n");
           break;
    case 0:
           switch(a<0){
           case 1:printf("negative\n");
                  break;
           case 0:printf("zero");       


           }



    }














}