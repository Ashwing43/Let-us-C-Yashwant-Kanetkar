#include<stdio.h>
struct customer
{
    /* data */
    int acc;
    char name[30];
    int balance;
};

int main(){
    struct customer customers[200] = {0};
    while (1)
    {
        int ch;
        printf("0. Withdrawl\n1. Deposit\n2. Exit\nEnter a choice ");
        scanf("%d", &ch);
        if(ch == 0){
            int a;
            printf("Enter account number ");
            scanf("%d", &a);
            int amount;
            printf("Enter amount ");
            scanf("%d", &amount);
            if(customers[a].balance-amount < 1000){
                printf("The balance is insufficient for the specified withdrawal\n");
            }else{
                customers[a].balance-=amount;
                printf("Amount withdrawn %d\nNew balance %d\n", amount, customers[a].balance);
            }
        }else if(ch == 1){
            int a;
            printf("Enter account number ");
            scanf("%d", &a);
            int amount;
            printf("Enter amount ");
            scanf("%d", &amount);
            customers[a].balance+=amount;
            printf("Amount deposited %d\nNew balance %d\n", amount, customers[a].balance);
        }else if(ch == 2){
            printf("Exited");
            break;
        }
    }
    return 0;
}