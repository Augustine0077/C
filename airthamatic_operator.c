#include<stdio.h>
#include<stdbool.h>
int main(){
    float num1 = 10;
    float num2 = 10;
    float sum_add, sum_sub, sum_mul, sum_div;
    int sum_mod;

    sum_add = num1 + num2;
    sum_sub = num1 - num2;
    sum_mod = (int)num1 % (int)num2;
    sum_mul = num1 * num2;
    sum_div = num1 / num2;

    printf("Addition: %.2f\n", sum_add);
    printf("Subtraction: %.2f\n", sum_sub);
    printf("Modulus: %d\n", sum_mod);
    printf("Multiplication: %.2f\n", sum_mul);
    printf("Division: %.2f\n", sum_div);
    return 0;
}