#include<stdio.h>
int main(){
    int x1, y1;
    printf("Enter x, y ");
    scanf("%d %d", &x1, &y1);
    if(x1 == 0 && y1 != 0)
        printf("Point lies on y-axis");
    else if(x1 != 0 && y1 == 0)
        printf("Point lies on x-axis");
    else if(x1 == 0 && y1 == 0)
        printf("Point lies on origin");
    else 
        printf("Point lies neither on axis nor origin");
}