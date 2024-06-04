#include<stdio.h>
void modify(int *arr);
void print(int *arr);
int main(){
    int arr[] = {1, 2, 3, 5, 4, 23, 54, 64, 23, 12};
    modify(arr);
    printf("Modified array \n");
    print(arr);
    return 0;
}
void modify(int *arr){
    for(int i=0; i<10; i++){
        *(arr + i)*=3;
    }
}
void print(int *arr){
    for(int i=0; i<10; i++){
        printf("%d ", *(arr+i));
    }
}