#include<stdio.h>
#include<math.h>
int main() {
    double final_amount = 0.0;
    float principle_amount;
    float annual_interest_rate;
    float number_of_times;
    float number_of_years;

    printf("Enter the principal: ");
    scanf("%f", &principle_amount);

    printf("Enter the annual interest rate (in percent): ");
    scanf("%f", &annual_interest_rate);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%f", &number_of_times);

    printf("Enter the number of years: ");
    scanf("%f", &number_of_years);

    final_amount = principle_amount * pow((1 + annual_interest_rate / (100 * number_of_times)), (number_of_times * number_of_years));

    printf("The final amount: %.2lf\n", final_amount);

    return 0;
}