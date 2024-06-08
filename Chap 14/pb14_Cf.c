#include<stdio.h>
void solve(int (*a)[6], int (*b)[6], int (*ans)[6]);
void print(int (*ans)[6]);
int main(){
    int a[6][6] = {
        {1,2,3,3,4,5},
        {3,3,4,2,1,3},
        {1,5,4,3,3,2},
        {4,3,2,5,6,7},
        {6,5,4,3,6,7},
        {5,4,2,5,7,4},
    };
    int b[6][6] = {
        {5,4,3,5,6,4},
        {4,5,3,2,5,6},
        {1,5,4,3,3,2},
        {6,5,4,3,6,7},
        {4,3,5,6,4,2},
        {1,5,4,3,3,2},
    };
    int ans[6][6] = {0};
    solve(a, b, ans);
    print(ans);
    return 0;
}
void solve(int (*a)[6], int (*b)[6], int (*ans)[6]){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            *(*(ans+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
}
void print(int (*ans)[6]){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("%d\t", *(*(ans+i)+j));
        }
        printf("\n");
    }
}