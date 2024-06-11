#include<stdio.h>
#include<string.h>
#include<math.h>

struct part
{
    int year;
    char mat[10];
    int quantity;
};

int getValue(char *a);
char* getString(int i);
void printAll(struct part *parts);
void input(struct part *parts);
void printSingle(struct part *parts);

int main(){
    struct part parts[360] = {0};
    while(1){
        int ch;
        printf("1. Input\n2. print\n3. Print from BB1 to CC6\n4. Exit\nEnter a choice ");
        scanf("%d", &ch);
        fflush(stdin);
        if(ch == 1){
            input(parts);
        }
        if(ch == 2){
            printSingle(parts);
        }
        if(ch == 3){
            printAll(parts);
        }else if(ch == 4){
            printf("Exited");
            break;
        }
        fflush(stdin);
    }
    return 0;
}
int getValue(char *a){
    return 60*(a[0]-'A') + 10*(a[1]-'A') + a[2]-'0';
}
char* getString(int i){
    static char ans[4];
    ans[0] = 'A'+i/60;
    i %= 60;
    ans[1] = 'A'+i/10;
    i %= 10;
    ans[2] = '0'+ i;
    ans[3] = '\0';
    return ans;
}
void printAll(struct part *parts){
    int val1 = getValue("BB0");
    int val2 = getValue("CC6");
    printf("\tSr no\tYear of Man\tMaterial\tQuantity\n");
    for(int i=0; i<360; i++){
        if(i>=val1 && i<=val2 && parts[i].year != 0){
            printf("\t%s\t%d\t\t%s\t\t%d\n", 
                    getString(i), parts[i].year, parts[i].mat, parts[i].quantity);
        }
    }
}
void input(struct part *parts){
    char sn[4];
    printf("Enter serial number ");
    fgets(sn, 4, stdin);
    fflush(stdin);
    int val = getValue(sn);
    printf("Enter year of manufacturing, quantity, and material: ");
    scanf("%d %d %9s", &parts[val].year, &parts[val].quantity, parts[val].mat);
    fflush(stdin);
}
void printSingle(struct part *parts){
    char sn[4];
    printf("Enter serial number ");
    fgets(sn, 4, stdin);
    fflush(stdin);
    int val = getValue(sn);
    printf("\tSr no\tYear of Man\tMaterial\tQuantity\n\t%s\t%d\t\t%s\t\t%d\n", 
            sn, parts[val].year, parts[val].mat, parts[val].quantity);
}