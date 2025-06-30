#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float fahrenheit;
    float celsius;
    printf("weight conversion program\n");
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("2. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f\n", celsius);
    }
    else if(choice == 2)
    {
        printf("Enter the temperature in celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    }
    else
    {
        printf("You have entered a wrong choice.\n");
    }


    
       return 0;
}