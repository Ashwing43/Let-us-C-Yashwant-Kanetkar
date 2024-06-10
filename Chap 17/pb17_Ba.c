#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    char name[50];
    int depart;
    int course;
    int yoj;
};

int main(){
    char* departments[] = {"Computer", "Info Tech", "Mechanical"};
    char* course[] = {"Graphics", "Op System", "D.B.M.S."};
    struct student students[450] = {0};
    int i=0;
    while(1){
        int ch;
        printf("****************************************************************************\n");
        printf("1.Enter new student\n2.print a student info\n3.Print students with year\n4.exit\nEnter a choice: ");
        scanf("%d", &ch);
        if(ch == 1){
            int r;
            printf("\tEnter Roll no: ");
            scanf("%d", &r);
            char n[50];
            fflush(stdin);
            printf("\tEnter Name(max. 50 chars): ");
            fgets(n, 50, stdin);
            n[strlen(n)-1] = '\0';
            int d;
            printf("\tEnter department no\n\t\t1.Computer\n\t\t2.Info Tech\n\t\t3.Mechanical\n\t\t");
            scanf("%d", &d);
            int c;
            printf("\tEnter course number\n\t\t1.Graphics\n\t\t2.Op System\n\t\t3.DBMS\n\t\t");
            scanf("%d", &c);
            int y;
            printf("\tEnter year of joining ");
            scanf("%d", &y);
            strcpy(students[r].name, n);
            students[r].depart = d-1;
            students[r].course = c-1;
            students[r].yoj = y;

        }else if(ch == 2){
            int r;
            printf("\tEnter roll number ");
            scanf("%d", &r);
            printf("\tName\t\tDepartment\tCourse\t\tYear of joining\n\t%s\t%s\t%s\t%d\n", students[i].name, departments[students[i].depart], course[students[i].course], students[i].yoj);
        }
        else if(ch == 3){
            int y;
            printf("Enter year ");
            scanf("%d", &y);
            printf("\tName\t\tDepartment\tCourse\t\tYear of joining\n");
            for(int i=0; i<450; i++){
                if(students[i].yoj == y){
                    printf("\t%s\t%s\t%s\t%d\n", students[i].name, departments[students[i].depart], course[students[i].course], students[i].yoj);
                }
            }
        }else if(ch == 4){
            printf("Exited");
            break;
        }
        else{
            printf("Wrong choice");
        }
        fflush(stdin);
    }
    return 0;
}