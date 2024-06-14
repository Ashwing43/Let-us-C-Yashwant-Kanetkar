#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("file.txt", "r");
    char ch;
    while(1){
        ch = fgetc(fp);
        if(ch == EOF) break;
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}