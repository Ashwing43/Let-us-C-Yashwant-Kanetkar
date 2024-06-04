#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter angles ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }
    return 0;
}