#include<stdio.h>
void main(){
int side1,side2,side3;
printf("enter the sides:\n");
scanf("%d%d%d",&side1,&side2,&side3);
if(side1==side2 && side2==side3 && side3==side1){
  printf("triangle is equilateral");
}
else if(side1==side2 || side2==side3){
    printf("triangle is isoceles");
}
else {
    printf("triangle is scalane");
}






}