#include<stdio.h>
int main(){

int age;
char name[50];
float height;
printf("enter your name");
scanf("%s", name);

printf("Enter your age: ");
scanf("%d", &age);

printf("enter your height");
scanf("%f", &height);

printf("your name is %s\n",name);
printf("yor age is %d\n ",age);
printf("yor height is %.2f\n ",height);
    return 0;

}