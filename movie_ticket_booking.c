#include<stdio.h>
#include<stdbool.h>
int main(){
    float price = 10;
    bool is_student = false; // 10%
    bool is_senior = false;  // 20%

    // Only apply discounts if the user is a student or senior
    if (is_senior) {
        if (is_student) {
            printf("You are a student, you get a discount of 10%%\n");
            printf("You are a senior, you get a discount of 20%%\n");
            price *= 0.7;
        } else {
            printf("You are a senior, you get a discount of 20%%\n");
            price *= 0.8;
        }
    } else if (is_student) {
        printf("You are a student, you get a discount of 10%%\n");
        price *= 0.9;
    } else {
        printf("No discount applied.\n");
    }

    printf("The price of a ticket is %.2f\n", price);
    return 0;
}