#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int a = n;
    int rev = 0;
    while(a != 0){
        rev = rev*10 + a%10;
        a /= 10;
    }
    if(rev == n){
        printf("reverse of number is same.");
    }else{
        printf("reverse of number is not same.");
    }
    return 0;
}