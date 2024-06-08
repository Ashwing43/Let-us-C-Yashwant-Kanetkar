#include<stdio.h>
int main(){
    int arr[3][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}},
        {{9, 10}, {11, 12}}
    };
    int (*p)[2][2];
    p = arr;
    printf("First element Address=%d, element=%d\n", p, ***(p));
    printf("Last element Address=%d, element=%d\n", **(p+2)+3, ***(p+2)+3);
    // printf("%d\n", &arr[2][1][1]);
    // printf("%d\n", (*(p+2)+1)+1);
    // printf("%d\n", *(*(p+2)+1)+1);
    // printf("%d\n", *(*(*(p+2)+1)+1));

    return 0;
}