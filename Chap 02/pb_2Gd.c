#include<stdio.h>
#include<math.h>
int main(){
    double t, v;
    printf("Enter value of t & v : ");
    scanf("%lf %lf", &t, &v);
    double ans = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind chill factor is %lf", ans);
    return 0;
}