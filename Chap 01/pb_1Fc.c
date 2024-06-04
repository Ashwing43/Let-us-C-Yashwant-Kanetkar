#include<stdio.h>
int main(){
    int dim1 = 1189;
    int dim2 = 841;
    for(int i=0; i<=8; i++){
        printf("for A%d : %d * %d \n", i, dim1, dim2);
        int temp = dim2;
        dim2 = dim1/2;
        dim1 = temp;
    }
    return 0;
}