#include <stdio.h>  
#include<stdbool.h>

bool agecheck(int age){
    if (age <= 18){
        return true; // Age is 18 or less
    } else {
        return false; // Age is greater than 18
    }
}

int age = 21;

int main() {
    if (agecheck(age)) {
        printf("You have to become 18+ old.\n");
        
    } else {
        printf("You sign up to the account.\n");
    }
    return 0;
}