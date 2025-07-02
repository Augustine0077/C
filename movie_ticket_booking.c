#include<stdio.h>
#include<stdbool.h>
int main(){
    float price =10;
    bool is_stdent;
    bool is_Senior;

   if(is_stdent){
    printf("you get a 10% discount");
    price *=0.9;
   }
   if(is_Senior){
    printf("you get a 20%% discount");
    price *=0.8;
   }
   
    return 0;
}