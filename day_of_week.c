#include<stdio.h>
#include<time.h>
int main(){

    int day_of_week;

    printf("Enter the day of week");
    scanf("%d",&day_of_week);
    switch (day_of_week)
    {
        case 1:
        printf("This is sunady");
        break;
        case 2:
        printf("This is monday");
        break;
        case 3:
        printf("This is Tusday");
        break;
        case 4:
        printf("This is wednesday");
        break;
        case 5:
        printf("This is thursday");
        break;
        case 6:
        printf("This is friday");
        break;
        case 7:
        printf("This is Saturday");
        break;
        default:
        printf("wrong input");
        break;
    }



    return 0;
}