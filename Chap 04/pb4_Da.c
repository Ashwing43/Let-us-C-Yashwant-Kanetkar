#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c){
        printf("Triangle is equilateral ");
    }else if(a == b || b == c || c == a){
        printf("Triangle is isosceles ");
    }else if(a != b && b != c && c != a){
        printf("Triangle is scalene ");
    }
    if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
        printf("and right angled.\n");
    }else{
        printf("\b.");
    }
    return 0;
}