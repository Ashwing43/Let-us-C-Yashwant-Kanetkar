#include<stdio.h>
#include<math.h>
float std(int *arr, int size);
float calcMean(int *arr, int size);
int main(){
    int arr[] = {-6, -12, 8, 13, 11, 6, 7 , 2, -6, -9, -10, 11, 10, 9, 2};
    int size = sizeof(arr)/sizeof(int);
    printf("The std. deviation is %f", std(arr, size));
}
float std(int *arr, int size){
    float mean = 0;
    mean = calcMean(arr, size);
    float dev = 0;
    for(int i=0; i<size; i++){
        dev += pow(*(arr+i)*1.0 - mean, 2);
    }
    return sqrt(dev/size);
}
float calcMean(int *arr, int size){
    int total = 0;
    for(int i=0; i<size; i++){
        total += *(arr + i);
    }
    return 1.0*total/size;
}