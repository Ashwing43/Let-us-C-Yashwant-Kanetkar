#include<stdio.h>
int isArmstrong(int n);
int main(){
    for(int i=1; i<=500; i++){
        if(isArmstrong(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
int isArmstrong(int n){
    int ans = 0;
    int i = n;
    while(i != 0){
        ans += (i%10)*(i%10)*(i%10);
        i/=10;
    }
    return ans == n;
}