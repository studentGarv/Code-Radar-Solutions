#include <stdio.h>

int main() {
    int month, year, days;

    // Get user input
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month! Please enter a number between 1 and 12.\n");
        return 1;  // Exit the program with an error code
    }

    // Special case for February
    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);

        // Leap year check: Divisible by 4, not divisible by 100 unless also divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;  // Leap year February
        else
            days = 28;  // Regular February
    }
    else {
        // Switch case for other months
        switch (month) {
            case 4: case 6: case 9: case 11:
                days = 30; // April, June, September, November
                break;
            default:
                days = 31; // January, March, May, July, August, October, December
                break;
        }
    }

    // Output result
    printf("Number of days: %d\n", days);

    return 0;
}
