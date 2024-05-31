#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Absolute value of %d is %d", a, abs(a));
    return 0;
}