#include<stdio.h>
void shift(int *p, int s);
void reverse(int *p, int a, int b);
void print(int *p);
int main(){
    int p[5] = {15, 30, 28, 19, 61};
    printf("Array before shift\n");
    print(p);
    shift(p, 2);
    printf("\nArray after shift\n");
    print(p);
    return 0;
}
void shift(int *p, int s){
    reverse(p, 0, s-1);
    reverse(p, s, 4);
    reverse(p, 0, 4);
}
void reverse(int *p, int a, int b){
    while(a < b){
        int temp = *(p+a);
        *(p+a) = *(p+b);
        *(p+b) = temp;
        a++;
        b--;
    }
}
void print(int *p){
    for(int i=0; i<5; i++){
        printf("%d ", *(p+i));
    }
}