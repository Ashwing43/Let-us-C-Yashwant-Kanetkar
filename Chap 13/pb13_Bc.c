#include<stdio.h>
int solve(int *arr);
int main(){
    int arr[25];
    int *ptr = arr;
    printf("Enter 25 numbers\n");
    for(int i=0; i<25; i++){
        scanf("%d", ptr++);
    }
    int ans = solve(arr);
    printf("Smallest number is %d", ans);
    return 0;
}
int solve(int *arr){
    int small = __INT_MAX__;
    for(int i=0; i<25; i++){
        if(*(arr + i) < small){
            small = *(arr + i);
        }
    }
    return small;
}