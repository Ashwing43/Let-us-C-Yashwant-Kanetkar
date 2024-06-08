#include<stdio.h>
void delete(char *s);
int isThe(char *s, int i);
int main(){
    char s[100];
    printf("Enter a sentence\n");
    fgets(s, 100, stdin);
    delete(s);
    printf("%s", s);
    return 0;
}
void delete(char *s){
    int j=0;
    for(int i=0; s[i] != '\0'; i++){
        if(*(s+i) == 't' && *(s+i+1) == 'h' && *(s+i+2) == 'e'){
            i += 3;
        }
        else{
            *(s+j) = *(s+i);
            j++;
        }
    }
    *(s+j) = '\0';
}