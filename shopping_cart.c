#include<stdio.h>
#include<string.h>
int main()
{
    char item[50] = "";
    float price= 0.0f;
    int quantity;
    float total=0.0f;
    printf("Welcome to the shopping cart program\n");
    



    printf("what item would you like to buy : ");
    fgets(item,sizeof(item),stdin);
    // Remove trailing newline from item

    printf("what is the price for each : ");
    scanf("%f", &price);
    getchar(); // Clear the newline character left by scanf

    printf("howmany would you like to buy :");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("you have bought %d of %s\n", quantity, item);
    printf("The total is %.2f $\n",total );


    return 0;

}