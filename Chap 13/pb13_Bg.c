#include<stdio.h>
#include<math.h>
float findMax(float *a, float *b, float *c);
int main(){
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float ang[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float ans = findMax(a, b, ang);
    printf("Maximum area is %f", ans);
}
float findMax(float *a, float *b, float *c){
    float max = __FLT32_MIN__;
    for(int i=0; i<6; i++){
        float area = 0.5 * a[i] * b[i] * sin(c[i] * 3.14/180);
        if(area > max) max = area;
    }
    return max;
}