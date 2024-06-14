#include<stdio.h>
#include<string.h>
struct library
{
    int acc;
    char title[50];
    char author[50];
    int price;
    int issued;
};

void addBook(struct library *lib, int i);
void displayBook(struct library *lib, int i);

int main(){
    struct library lib[100];
    int ind = 0;
    while (1)
    {
        int n;
        printf("1. Add book\n2. Display books\n3. Display books by author\n4. Display books by accession number\n5. Exit\nEnter a choice ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            /* code */
            addBook(lib, ind++);
            break;

        case 2:
            displayBook(lib, ind);
            break;

        case 3:
            // displayBooksofAuthor(lib);
            break;

        case 4:
            // displayBookByAccNo(lib);
            break;
            break;
            
        default:
            break;
        }
    }
    return 0;
}
void addBook(struct library *lib, int i){
    printf("Enter the accesion number: ");
    // while(getchar() != '\n');
    scanf("%d", &lib[i].acc);

    printf("Enter the title: ");
    while(getchar() != '\n');
    fgets(lib[i].title, 50, stdin);
    int n = strlen(lib[i].title);
    lib[i].title[n-1] = '\0';

    printf("Enter the author's name: ");
    // while(getchar() != '\n');
    fgets(lib[i].author, 50, stdin);
    n = strlen(lib[i].author);
    lib[i].author[n-1] = '\0';

    printf("Enter price: ");
    // while(getchar() != '\n');
    scanf("%d", &lib[i].price);

    printf("Issued(1) or not issued(0): ");
    // while(getchar() != '\n');
    scanf("%d", &lib[i].issued);
}
void displayBook(struct library *lib, int i){
    // printf("Ac. No\tBook title\t\tAuthor's name\t\tPrice\tIssued\n");
    printf("%-7s %-20s %-20s %-5s %-5s\n", "Ac. No", "Book title", "Author's name", "Price", "Issued");
    for(int j=0; j<i; j++){
        printf("%-7d %-20s %-20s %-6d %-6d\n", lib[j].acc, lib[j].title, lib[j].author, lib[j].price, lib[j].issued);
    }
}