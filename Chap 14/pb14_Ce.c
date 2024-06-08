#include<stdio.h>
int main(){
    int arr[][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {4, 4, 5}
    };
    int (*p)[3];
    p = arr;
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            if(*(*(arr+i)+j) != *(*(arr+j)+i)){
                printf("Array is not symmetric\n");
                // printf("%d %d", *(*(arr+i)+j), *(*(arr+j)+i));
                return 0;
            }
        }
    }
    printf("Array is symmetric");
    return 0;
}