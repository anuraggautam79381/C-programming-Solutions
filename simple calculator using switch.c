int main() {
    // Write C code here
    char operator;
float num1,num2;
printf("enter the character:\n");
scanf("%c",&operator);
printf("enter the both number:\n");
scanf("%f %f",&num1,&num2);
switch(operator){
     case '+':printf("%f",num1+num2);
              break;
     case '-':printf("%f",num1-num2);
              break;
     case '*':printf("%f",num1*num2);
              break;
     case '/':printf("%f",num1/num2);    
              break;
     default:printf("not a valid operator"); 
              break;                               


}

