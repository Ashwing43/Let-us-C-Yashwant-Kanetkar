#include<stdio.h>
int main()
{
    int year, basic_year=2001, leap, remaining, total_days, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    year = year-basic_year;
    leap = year/4;
    remaining = year - leap;
    total_days = (remaining*365) + (leap*366) + 1;

    day = total_days%7;

    if(day==0)
        printf("Sunday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Tuesday");
    else if(day==3)
        printf("Wednesday");
    else if(day==4)
        printf("Thursday");
    else if(day==5)
        printf("Friday");
    else if(day==6)
        printf("Saturday");
    else
        printf("Wrong Entry");
    return 0;
}