#include<stdio.h>
#include<math.h>
int main(){
    int c,d;
    printf("Enter c and d : ");
    scanf("%d %d", &c, &d);
    printf("before c=%d d=%d ", c, d);
    int temp = c;
    c = d;
    d = temp;
    printf("\nafter c=%d d=%d ", c, d);
    return 0;
}