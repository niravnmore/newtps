#include<stdio.h>

main() {
    // Convert number of years into number of months
    int month, year;
    printf("Enter value for year : ");
    scanf("%d", & year);

    month = year * 12;

    printf("Value for months : %d", month);
}