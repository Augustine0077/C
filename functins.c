#include<stdio.h>
#include<string.h>
void Happy_Birthday(char name[],int age) {
    printf("Happy Birthday to you\n");
    printf("Happy Birthday to %i\n",age);
    printf("Happy Birthday dear friend\n");
    printf("Happy Birthday to %s\n", name);
}

int main() {
    char name[20]="Augustine";
    int age=12;
    Happy_Birthday(name, age);
    Happy_Birthday(name, age);
    Happy_Birthday(name, age);
  
    return 0;
}