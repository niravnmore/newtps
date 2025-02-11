#include<stdio.h>

main() {
    // Convert number of years into days
    int year;
    printf("Enter year : ");
    scanf("%d", & year);

    int days = year * 365;
    printf("Days are : %d", days);
}