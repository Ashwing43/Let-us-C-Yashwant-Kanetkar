#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines ");
    scanf("%d", &n);
    int k = 1;
    int space = (n-1)*2;
    for(int i=0; i<n; i++){
        for(int j=0; j<space; j++){
            printf(" ");
        }
        space -= 2;
        for(int j=0; j<i+1; j++){
            printf("%d   ", k++);
        }
        printf("\n");
    }
    return 0;
}