#include<stdio.h>
#include<math.h>
int main(){
    return 0;
    double princpal =0.0;
    double rate =0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("compund intrest calculatro");
    printf("enter the principle (P)");
    scanf("%lf",&princpal);
    printf("enter the intrest rate  (r)");
    scanf("%lf",&rate);
    rate = rate / 100 ; 
    printf("Enter the number of years (T)");
    scanf("%d",&years);
    printf("enter the number of time compoundde dby year");
    scanf("%d",times_compounded);

    return 0;

}