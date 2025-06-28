#include<stdio.h>
#include<math.h>
int main(){
    #define M_PI 3.1415926
    double radius;
    double surface_area = 0.0; // Initialize surface_area to 0.0
    double volume = 0.0; // Initialize volume to 0.0
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1; // Exit with an error code
    }
    
    surface_area = 4*M_PI*pow(radius,2);
    volume =(4.0 / 3.0) * M_PI*pow(radius,3);
    printf("surface area of circle is : %.2lf \n",surface_area);
    printf("volume of circle is : %.2lf \n",volume);

    return 0;


}