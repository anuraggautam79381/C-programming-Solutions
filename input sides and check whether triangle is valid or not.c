#include<stdio.h>
void main()
{
int side1,side2,side3;
printf("enter the sides:\n");
scanf("%d%d%d",&side1,&side2,&side3);
if(side1+side2>side3){
    printf("valid triangle\n");
}
 else if(side2+side3>side1){
    printf("valid triangle\n");
}
 else if(side1+side3>side2){
    printf("valid triangle\n");
}
else {
    printf("not a valid triangle");
}



}









