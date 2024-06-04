#include<stdio.h>
int main(){
    float x1, x2, x3, y1, y2, y3;
    printf("Enter x1, y1 ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2, y2 ");
    scanf("%f %f", &x2, &y2);
    printf("Enter x3, y3 ");
    scanf("%f %f", &x3, &y3);
    float slope1 = (x2 - x1)*(y2 - y3);
    float slope2 = (x2 - x3)*(y2 - y1);
    if(slope1 == slope2){
        printf("All points lie on same line");
    }else{
        printf("They do not lie on same line");
    }
    return 0;
}