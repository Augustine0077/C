#include<stdio.h>
int main(){
    char operator;
    double num1 ;
    double num2;
    double result;

printf("enter a  first number");
scanf("%lf",&num1);

printf("Enter an operator ( +,- , * , / ,%% )");
scanf(" %c",&operator);

printf("enter second number");
scanf("%lf",&num2);

switch (operator)
{
case '+':
    /* code */
    result = num1+num2;
    break;
case '-':
    result = num1 - num2;
    break;

case '*':
    /* code */
    result = num1*num2;
    break;
case '/':
    /* code */
    result = num1/num2;
    break;
case '%':
    /* code */
    result = (int)num1 % (int)num2;
    break;
default:
printf("YOU HAVE N=ENTERED A WRONG INPUT");
    break;
}
printf("Result is %.1lf",result);
    return 0;
}