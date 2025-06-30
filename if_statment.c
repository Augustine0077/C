#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
int main(){

    // int age =12;

    // if(age >=18){
    // printf(" you can make vote");
    // }
    // else if(age < 0){
    //     printf("you are not born yet");
    // }
    // else if(age < 18 && age >= 0){
    //     printf("you are not old enough to make vote");
    // }
    // else {
    //     printf("you can not make vote");
    // }



    // bool is_student = true; 

    // if (is_student == false) {
    //     printf("You are a studnt \n");
    // }
    // else {
    //     printf("You are not a studnt ");
    // }
    // {
    //     /* code */
    // }
    
    char name[50]="";
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);
    // Remove newline character if present
    name[strcspn(name, "\n")] = 0; // strcspn finds the first occurrence of '\n' and replaces it with '\0'
    if (strlen(name)== 0) {
        /*The strlen function in C++ calculates the length of 
        a null-terminated C-style string pointed to by _Str, 
        excluding the null terminator.
        It returns the length as a value of type size_t.*/
        printf("You are not entered anything ");
    }
    else {
        printf("Hello, %s", name);
    }
    return 0;

}