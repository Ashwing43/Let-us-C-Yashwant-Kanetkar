#include<stdio.h>
int main(){
    float l, b, r;
    printf("Enter length, breadth and radius : ");
    scanf("%f %f %f", &l, &b, &r);
    float areaRect, areaCircle, peri, circum;
    areaRect = l * b;
    areaCircle = 3.14 * r * r;
    peri = 2 * (l + b);
    circum = 2 * 3.14 * r;
    printf("Rectangle\n\tarea : %f\n\tPerimeter : %f \nCircle\n\tarea : %f\n\tCircumference : %f", areaRect, peri, areaCircle, circum);
}