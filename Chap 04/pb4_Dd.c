#include<stdio.h>
int main(){
    int w;
    float h;
    printf("Enter weight in kg: ");
    scanf("%d", &w);
    printf("Enter height in meters: ");
    scanf("%f", &h);
    float BMI;
    BMI = w / (h*h);
    printf("BMI is %f\n", BMI);
    if(BMI < 15){
        printf("staevation");
    }else if(BMI >= 15 && BMI <= 17.5){
        printf("Anorexic");
    }else if(BMI > 17.5 && BMI <= 18.5){
        printf("Underweight");
    }else if(BMI > 18.5 && BMI <= 24.9){
        printf("Ideal");
    }else if(BMI > 24.9 && BMI <= 25.9){
        printf("Overweight");
    }else if(BMI > 25.9 && BMI <= 30.9){
        printf("Obese");
    }else if(BMI >= 40){
        printf("Morbidly Obese");
    }
    return 0;
}