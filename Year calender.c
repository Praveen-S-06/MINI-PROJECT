#include <stdio.h>
#include <math.h>

int main() {
 time_t t = time(NULL);
 struct tm *cur = localtime(&t);
 int year = 1900 + cur->tm_year;
 printf("Enter the year: ");
 scanf("%d", &year);

 int days = 0;
 for (int i = 1; i <= 12; i++) {
 int daysInMonth = 0;
 switch (i) {
 case 2:
 daysInMonth = 28;
 break;
 case 4:
 case 6:
 case 9:
 case 11:
 daysInMonth = 30;
 break;
 default:
 daysInMonth = 31;
 break;
 }
 printf("%s %d\n", months[i], daysInMonth);
 days += daysInMonth;
 }

 int daysInYear = days + 1;
 printf("There are %d days in the year.\n", daysInYear);

 return 0;
}
