#include<stdio.h>
#include<math.h>
#include <limits.h>
int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    int n;
    printf("Enter number of elements ");
    scanf("%d", &n);
    printf("Enter elements ");
    int a;
    while(n--){
        scanf("%d", &a);
        if(a < min){
            min = a;
        }
        if(a > max){
            max = a;
        }
    }
    printf("Range of entered elements is %d", max - min);
    return 0;
}