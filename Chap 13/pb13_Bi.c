#include<stdio.h>
#include<math.h>
float solve(int *x, int *y);
int main(){
    int x[10], y[10];
    for(int i=0; i<10; i++){
        printf("Enter x and y coordinates of point %d ", i+1);
        scanf("%d %d", &x[i], &y[i]);
    }
    float ans = solve(x, y);
    printf("The distance of first point from last is %f", ans);
    return 0;
}
float solve(int *x, int *y){
    float ans = 0;
    for(int i=0; i<9; i++){
        ans += sqrt(pow(x[i]-x[i+1], 2) + pow(y[i]-y[i+1], 2));
    }
    return ans;
}