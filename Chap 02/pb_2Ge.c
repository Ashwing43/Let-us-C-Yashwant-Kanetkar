#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("Enter the angle in degrees: ");
    scanf("%f", &n);
    float m = n * 3.14 / 180;
    printf("%f", m);
    printf("sin(%2.2f) = %2.2f", n, sin(m));
    printf("\ncos(%2.2f) = %2.2f", n, cos(m));
    printf("\ntan(%2.2f) = %2.2f", n, sin(m)/cos(m));
    printf("\ncot(%2.2f) = %2.2f", n, cos(m)/sin(m));
    printf("\nsec(%2.2f) = %2.2f", n, 1/sin(m));
    printf("\ncosec(%2.2f) = %2.2f", n, 1/cos(m));
    return 0;
}