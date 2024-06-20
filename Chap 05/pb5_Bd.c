#include<stdio.h>
int main(){
    int m,n, N = 0, P = 0, Z = 0;
    printf("Number of elements: ");
    scanf("%d", &n);
    while(n--){
        scanf("%d", &m);
        if(m > 0) P++;
        else if(m < 0) N++;
        else Z++;
    }
    printf("Number of positive elements is %d\n", P);
    printf("Number of negative elements is %d\n", N);
    printf("Number of zeroes is %d", Z);
    return 0;
}