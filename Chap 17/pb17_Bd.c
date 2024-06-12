#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cricketer
{
    /* data */
    char name[25];
    int age;
    int not;
    int avg;
};

int cmpfunc(const void *a, const void *b) {
    const struct cricketer *cricketerA = (const struct cricketer *)a;
    const struct cricketer *cricketerB = (const struct cricketer *)b;

    if (cricketerA->avg > cricketerB->avg) return 1;
    if (cricketerA->avg < cricketerB->avg) return -1;
    return 0;
}

int main(){
    int n;
    printf("Enter number of players ");
    scanf("%d", &n);
    struct cricketer* arr = (struct cricketer *)malloc(n * sizeof(struct cricketer *));
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("Input player %d\N", i+1);
        printf("\tEnter name ");
        fgets(arr[i].name, 25, stdin);
        arr[i].name[strlen(arr[i].name)-1] = '\0';
        fflush(stdin);
        printf("\tEnter age, No. of matches, avg. runs ");
        scanf("%d %d %d", &arr[i].age, &arr[i].not, &arr[i].avg);
    }
    qsort(arr, n, sizeof(struct cricketer), cmpfunc);
    printf("\nName of Player\tage\tNo.of Matches\tAvg. runs\n");
    for(int i=0; i<n; i++){
        printf("%s\t%d\t%d\t\t%d\n", arr[i].name, arr[i].age, arr[i].not, arr[i].avg);
    }
    return 0;
}