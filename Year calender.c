#include <stdio.h>

// Function to find the starting day of the week for a given month and year
int findStartDay(int year, int month) {
    int day = 1;
    int m, d, y;

    // Adjust month and year if month is January or February
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    // Zeller's Congruence algorithm to find the day of the week
    m = (13 * (month + 1)) / 5;
    y = year % 100;
    d = year / 100;

    return (day + m + y + y / 4 + d / 4 - 2 * d) % 7;
}

// Function to print the calendar for a given month and year
void printCalendar(int year, int month) {
    // Array containing number of days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};

    // Print month and year
    printf("\n===========================\n");
    printf("     %s %d\n", months[month - 1], year);
    printf("===========================\n");

    // Print weekdays header
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // Find starting day of the week for the first day of the month
    int startDay = findStartDay(year, month);

    // Print spaces for days before the starting day
    for (int i = 0; i < startDay; i++) {
        printf("     ");
    }

    // Print days of the month
    for (int day = 1; day <= daysInMonth[month - 1]; day++) {
        printf("%-5d", day);
        startDay++;
        if (startDay > 6) {
            startDay = 0;
            printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int year, month;

    // Input year and month
    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Validate month
    if (month < 1 || month > 12) {
        printf("Invalid month input.\n");
        return 1;
    }

    // Print calendar
    printCalendar(year, month);

    return 0;
}
