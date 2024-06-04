#include<stdio.h>
#include<math.h>
int main(){
    float x, y, r, p;
    printf("Enter Cartesian coords x, y : ");
    scanf("%f %f", &x, &y);
    r = sqrt(x*x + y*y);
    p = atan(y/x);
    printf("Polar coordinates are %f and %f", r, p);
    return 0;
}