#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
    double volume;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);
    printf("\nVolume: %lf", volume);

    return 0;
}