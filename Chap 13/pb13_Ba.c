#include<stdio.h>
void solve(int *arr, int *p, int *n, int *e, int *o);
int main(){
    int arr[25];
    int n = 0, p = 0, e = 0, o = 0;
    int *ptr = arr;
    printf("Enter 25 numbers\n");
    for(int i=0; i<25; i++){
        scanf("%d", ptr++);
    }
    solve(arr, &p, &n, &e, &o);
    printf("Positive = %d\nNegative = %d\nEven = %d\nOdd = %d", p, n, e, o);
    return 0;
}
void solve(int *arr, int *p, int *n, int *e, int *o){
    
    for(int i=0; i<25; i++){
        // printf("%d\n", arr[i]);
        if(*(arr + i) >= 0) (*p)++;
        else (*n)++;
        if(*(arr + i)%2 == 0) (*e)++;
        else (*o)++;
    }
}