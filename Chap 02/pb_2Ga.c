#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int ans = 0;
    while(n!=0){
        ans += n%10;
        n /= 10;
    }
    printf("Sum of digits is %d", ans);
    return 0;
}