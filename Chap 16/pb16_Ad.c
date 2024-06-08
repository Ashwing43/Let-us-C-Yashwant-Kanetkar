#include<stdio.h>
int main(){
    char s[100];
    printf("Enter the name\n");
    fgets(s, 100, stdin);
    char abb[80];
    int j=3;
    *abb = *s;
    *(abb+1) = '.';
    *(abb+2) = ' ';
    int cnt = 0;
    for(int i=1; s[i] != '\0'; i++){
        if(*(s+i) == ' ' && cnt == 0){
            *(abb + j) = *(s+i+1);
            *(abb + j + 1) = '.';
            *(abb + j + 2) = ' ';
            j += 3;
            cnt++;
            i++;
            while(*(s+i) != ' ' && s[i] != '\0') i++;
        }
        else if(cnt >= 1){
            *(abb + j) = *(s+i);
            j++;
        }
    }
    *(abb+j) = '\0';
    printf("%s", abb);
    return 0;
}