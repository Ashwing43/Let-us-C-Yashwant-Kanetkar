#include<stdio.h>
int isValid(char* s);
int main(){
    char* s = "4111111111111111\0";
    if(isValid(s)){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}
int isValid(char *s){
    int sum1 = 0, sum2 = 0;
    for(int i=0; s[i] != '\0'; i++){
        if(i%2 == 0){
            int digit = (s[i]-'0')*2;
            if(digit >= 10) digit -= 9;
            sum1 += digit;
        }else{
            sum2 += s[i]-'0';
        }
    }
    if((sum1+sum2)%10 == 0) return 1;
    return 0;
}