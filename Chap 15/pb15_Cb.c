#include<stdio.h>
#include<string.h>
int isValidISBN(char s[]);
int main() 
{ 
    // char isbn[] = "007362542X";
    char isbn[] = "0198526636";
    if (isValidISBN(isbn)) 
        printf("Valid"); 
    else
        printf("Invalid"); 
    return 0; 
}
int isValidISBN(char isbn[]) 
{ 
    int sum=0; 
    for (int i=0; i<9; i++)  
    { 
        int digit = isbn[i]-'0'; 
        if(0>digit || 9<digit) return 0; 
        sum += (digit*(10-i)); 
    }
    char last = isbn[9]; 
    if (last != 'X' && (last<'0' || last>'9')) return 0; 
    sum += ((last == 'X') ? 10 : (last - '0')); 
    return (sum%11 == 0); 
} 