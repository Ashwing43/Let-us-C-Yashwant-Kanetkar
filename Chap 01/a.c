#include<stdio.h>
#include<string.h>
char* solve(char *products){
    static char ans[100];
    int min = 100000;
    char* tk = strtok(products, ";");
    while(tk != NULL){
        char n[100];
        int inv;
        sscanf(tk, "%s %d", n, &inv);
        // fgets(n, 100, tk);
        printf("%s\n", n);
        if(inv < min){
            min = inv;
            strcpy(ans, n);
        }
        tk = strtok(NULL, ";");
    }
    return ans;
}
int main(){
    char products[100];
    fgets(products, 100, stdin);
    printf("Answer is %s", solve(products));
    return 0;
}