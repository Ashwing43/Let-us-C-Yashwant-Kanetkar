#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct emp {
    int code;
    char name[25];
    char date[9];
};

int calDuration(const char *date1_str, const char *date2_str);
int days_from_reference_date(int day, int month, int year);
void parse_date(const char *date_str, int *day, int *month, int *year);
int days_in_month(int month, int year);
int is_leap_year(int year);

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct emp *employees = (struct emp *) malloc(n * sizeof(struct emp));

    for (int i = 0; i < n; i++) {
        printf("Enter info of employee %d\n", i + 1);
        printf("Enter code: ");
        scanf("%d", &employees[i].code);
        
        printf("Enter name: ");
        while (getchar() != '\n'); // Clear the input buffer
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; // Remove newline character

        printf("Enter date (DDMMYYYY): ");
        fgets(employees[i].date, sizeof(employees[i].date), stdin);
        employees[i].date[strcspn(employees[i].date, "\n")] = '\0'; // Remove newline character
    }

    char date[9];
    printf("Enter today's date (DDMMYYYY): ");
    while (getchar() != '\n'); // Clear the input buffer
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0'; // Remove newline character

    printf("Emp code\tName\t\tDate of Joining\n");
    for (int i = 0; i < n; i++) {
        if (calDuration(employees[i].date, date) > 365 * 3) {
            printf("%d\t\t%s\t\t%s\n", employees[i].code, employees[i].name, employees[i].date);
        }
    }

    free(employees);
    return 0;
}

int calDuration(const char *date1_str, const char *date2_str) {
    int day1, month1, year1, day2, month2, year2;

    // Parse the date strings into day, month, and year
    parse_date(date1_str, &day1, &month1, &year1);
    parse_date(date2_str, &day2, &month2, &year2);

    // Calculate the number of days from the reference date for both dates
    int days1 = days_from_reference_date(day1, month1, year1);
    int days2 = days_from_reference_date(day2, month2, year2);

    // Return the difference in days
    return abs(days2 - days1);
}

int days_from_reference_date(int day, int month, int year) {
    int days = 0;

    // Add days for the complete years
    for (int y = 0; y < year; y++) {
        days += is_leap_year(y) ? 366 : 365;
    }

    // Add days for the complete months in the current year
    for (int m = 1; m < month; m++) {
        days += days_in_month(m, year);
    }

    // Add days for the current month
    days += day;

    return days;
}

void parse_date(const char *date_str, int *day, int *month, int *year) {
    char day_str[3], month_str[3], year_str[5];

    // Extract day, month, and year as strings
    strncpy(day_str, date_str, 2);
    day_str[2] = '\0';
    strncpy(month_str, date_str + 2, 2);
    month_str[2] = '\0';
    strncpy(year_str, date_str + 4, 4);
    year_str[4] = '\0';

    // Convert strings to integers
    *day = atoi(day_str);
    *month = atoi(month_str);
    *year = atoi(year_str);
}

int days_in_month(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return is_leap_year(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

int is_leap_year(int year) {
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}
