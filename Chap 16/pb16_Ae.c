#include<stdio.h>
int isVowel(char a);
int main(){
    char s[100];
    printf("Enter the sentence\n");
    fgets(s, 100, stdin);
    int cnt = 0;
    for(int i=0; s[i+1] != '\0'; i++){
        if(isVowel(s[i]) && isVowel(s[i+1])){
            cnt++;
        }
    }
    printf("Number of occurances %d", cnt);
    return 0;
}
int isVowel(char a){
    return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}