#include<stdio.h>
int main(){
    int l, b;
    printf("Enter length and breadth ");
    scanf("%d %d", &l, &b);
    int area = l * b;
    int peri = 2 * (l + b);
    if(area > peri){
        printf("Area is greater");
    }else if(area < peri){
        printf("Perimeter is greater");
    }else{
        printf("both are equal");
    }
    return 0;
}