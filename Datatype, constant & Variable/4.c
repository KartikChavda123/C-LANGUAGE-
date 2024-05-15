#include <stdio.h>
int main(){
    float radius ,area;
    const float pi=3.14159;

    printf("Enter the radius of circle:");
    scanf("%f",&radius);

    area=pi*radius*radius;

    printf("Area of the circle:%f",area);
}