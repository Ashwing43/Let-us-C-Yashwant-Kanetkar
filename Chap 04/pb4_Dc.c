#include<stdio.h>
#define EPSILON 1e-6
int main(){
    float h,c,t;
    printf("Enter hardness, carbon content and tensile strength\n");
    scanf("%f %f %f", &h, &c, &t);
    int con1=0, con2=0, con3=0;
    if(h > 50.0){
        con1 = 1;
    }
    if(c < 0.7- EPSILON){
        con2 = 1;
    }
    if(t > 5600.0){
        con3 = 1;
    }
    printf("Steel is ");
    if(con1 && con2 && con3){
        printf("grade 10.");
    }else if(con1 && con2){
        printf("grade 9.");
    }else if(con2 && con3){
        printf("grade 8.");
    }else if(con1 && con3){
        printf("grade 7.");
    }else if(con1 || con2 || con3){
        printf("grade 6.");
    }else{
        printf("grade 5.");
    }
    return 0;
}