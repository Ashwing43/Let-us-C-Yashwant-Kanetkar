#include<stdio.h>
void multiply(int(*a)[3], int (*b)[3], int(*ans)[3]);
void print(int(*a)[3]);
int main(){
    int a[3][3] = {
        {1,2,3},
        {3,2,4},
        {4,3,2}
    };
    int b[3][3] = {
        {4,5,3},
        {5,2,5},
        {7,2,4}
    };
    int ans[3][3] = {0};
    multiply(a, b, ans);
    print(ans);
    return 0;
}
void multiply(int(*a)[3], int (*b)[3], int(*ans)[3]){
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            for (int x=0; x<3; x++) {
                *(*(ans+i) + j) += *(*(a+i)+x)
                                     * *(*(b+x)+j);
            }
        }
    }
}
void print(int (*ans)[3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", *(*(ans+i)+j));
        }
        printf("\n");
    }
}