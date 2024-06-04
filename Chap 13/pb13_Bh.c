#include<stdio.h>
#include<math.h>
float calXY(float *x, float *y, int size);
float calSum(float *x, int size);
float calSumSquare(float *x, int size);
int main(){
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    int size = sizeof(x)/sizeof(x[0]);
    // printf("The size is %d\n", size);
    float sumXY = calXY(x, y, size);
    float sumX = calSum(x, size);
    float sumY = calSum(y, size);
    float sumXSquare = calSumSquare(x, size);
    float sumYSquare = calSumSquare(y, size);
    float r = (size * sumXY - sumX * sumY)/sqrt((size * sumXSquare - sumX*sumX)*(size * sumYSquare - sumY*sumY));
    printf("Coefficient of correlation is %f", r);
    return 0;
}
float calXY(float *x, float *y, int size){
    float ans = 0;
    for(int i=0; i<size; i++){
        ans += ((*(x+i)) * (*(y+i)));
    }
    return ans;
}
float calSum(float *x, int size){
    float ans = 0;
    for(int i=0; i<size; i++){
        ans += *(x+i);
    }
    return ans;
}
float calSumSquare(float *x, int size){
    float ans = 0;
    for(int i=0; i<size; i++){
        ans += ((*(x+i)) * (*(x+i)));
    }
    return ans;
}