#include<stdio.h>
int main()
{
    int choice;
    float kilogram;
    float pound;
    
    printf("Weight Converter\n");
    printf("1. Kilograms to Pounds\n"); 
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice ==1){
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilogram);
        pound = kilogram * 2.20462; // 1 kilogram = 2.20462 pounds
        printf("%.2f kilograms is equal to %.2f pounds\n", kilogram, pound);
    } else if (choice == 2) {
        printf("Enter weight in pounds: ");
        scanf("%f", &pound);
        kilogram = pound * 0.453592; // 1 pound = 0.453592 kilograms
        printf("%.2f pounds is equal to %.2f kilograms\n", pound, kilogram);
    }
    else{
        printf("You have neterd a wrong choice\n");
        printf("Please enter 1 or 2\n");
    }
    return 0;

}