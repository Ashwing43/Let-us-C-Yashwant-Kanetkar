#include<stdio.h>
void removeVowels(char *s);
int isVowel(char a);
int main(){
    char s[80];
    fgets(s, 80, stdin);
    removeVowels(s);
    printf("%s", s);
    return 0;
}
void removeVowels(char *s){
    int j=0;
    for(int i=0; s[i] !='\0'; i++){
        if(!isVowel(*(s+i))){
            *(s+j) = *(s+i);
            j++; 
        }
    }
    *(s + j) = '\0';
}
int isVowel(char a){
    return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}
