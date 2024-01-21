/* Develop a program that receives the month and year from the keyboard as integers and prints the calendar in the following format.

     September 2004
Mon Tue Wed Thu Fri Sat Sun
          1  2   3   4   5
 6   7    8  9  10  11  12
13  14   15 16  17  18  19
20  21   22 23  24  25  26
27  28   29 30
Note that according to the Gregorian calendar 01/01/1900 was Monday. With this as the base the calendar should be generated.*/
#include<stdio.h>
void printCalendar(int month, int year);
int getStartDay(int month, int year);
int isLeapYear(int year);

int main() {
    int month, year;

    // Input month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Print the calendar
    printCalendar(month, year);

    return 0;
}

void printCalendar(int month, int year) {
    int daysInMonth, startDay, day;
    int dayOf_Week = 0;

    // Array to store the number of days in each month since January starts from month1 so at index 0, 0 is assigned
    int daysInMonthArray[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    char *month_name[]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    // Check for leap year and update February days
    if (isLeapYear(year)) {
        daysInMonthArray[1] = 29;
    }

    // Calculate the number of days in the specified month
    daysInMonth = daysInMonthArray[month-1];

    // Calculate the start day of the month
    startDay = getStartDay(month, year);

    // Print the header
    printf("\n\t%s %d\n",month_name[month-1],year);
    printf("Mon Tue Wed Thu Fri Sat Sun\n");

    // Print leading spaces
    for (day = 1; day <= startDay; day++) {
        printf("    ");
        dayOf_Week++;
    }

    // Print the days of the month
    for (day = 1; day <= daysInMonth; day++) {
        printf("%d ", day);
        dayOf_Week++;

        // Move to the next line after Saturday
        if (dayOf_Week > 6) {
            printf("\n");
            dayOf_Week = 0;
        }
    }

    // Print a newline at the end
    printf("\n");
}

int getStartDay(int month, int year) {
    int d = 1;
    int m = month;
    int y = year;

    // January and February are counted as months 13 and 14 of the previous year
    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    // Zeller's Congruence algorithm to calculate the day of the week
    int dayOfWeek = (d + ((13 * (m + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // Adjust the result to get Sunday as 0, Monday as 1, etc.
    return (dayOfWeek + 5) % 7;
}

int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4
    // But if that year is divisible by 100, it also has to be divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}