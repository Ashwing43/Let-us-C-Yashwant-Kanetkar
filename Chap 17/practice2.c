#include<stdio.h>
#pragma pack(1)
struct book{
    /* data */
    char name;
    float price;
    int pages;
};
#pragma pack()
int main(){
    
    struct book b1 = {'a', 120.03, 23};
    struct book b2 = b1;
    b1.name = 'a';
    struct book *p;
    p = &b1;
    
    printf("%d %d %d", &(b1.name), &(b1.price), &(b1.pages));
    return 0;
}