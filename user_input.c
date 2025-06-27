#include<stdio.h>

int main() {
    int age;
    char name[50];
    float height;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Reads full name including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);
    getchar(); // Clear the newline character left by scanf
    // Remove trailing newline from name
    printf("Your name is %s", name);
    printf("Your age is %d\n", age);
    printf("Your height is %f\n", height);

    return 0;
}