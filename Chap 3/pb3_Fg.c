#include<stdio.h>
#include<math.h>
int main(){
    float x1, y1, r, x2, y2;
    printf("Enter x, y & radius ");
    scanf("%f %f %f", &x1, &y1, &r);
    printf("Enter new point ");
    scanf("%f %f", &x2, &y2);
    float distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    if(distance < r){
        printf("Point lies in the circle");
    }
    else{
        printf("Point lies out of the circle");
    }
    return 0;
}