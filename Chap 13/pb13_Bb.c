#include<stdio.h>
int solve(int *arr, int n);
int main(){
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = solve(arr, n);
    if(ans == 0){
        printf("Array is correct");
    }else{
        printf("Array is not correct");
    }
    return 0;
}
int solve(int *arr, int n){
    int i=0, j=n-1;
    while(i<j){
        if(*(arr + i) != *(arr + j)) {
            return 1;
        }
        i++;
        j--;
    }
    return 0;
}