e<stdbool.h>

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
        printf("You are 18 or younger.\n");
    } else {
        printf("You are older than 18.\n");
    }
    return 0;
}