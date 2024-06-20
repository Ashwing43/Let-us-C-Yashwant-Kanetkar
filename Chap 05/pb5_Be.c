#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int m = n, ans = 0;
    while(n != 0){
        ans = ans * 10 + n%8;
        n /= 8;
    }
    int ans2 = 0;
    while(ans != 0){
        ans2 = ans2*10 + ans%10;
        ans /= 10;
    }
    printf("Octal of %d is %d", m, ans2);
    return 0;
}