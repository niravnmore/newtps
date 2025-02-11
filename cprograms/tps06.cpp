#include<stdio.h>

main() {

    // Convert number of days into number of year/s

    int days, temp;
    float year;

    printf("Enter number of days : ");
    scanf("%d", & days);

    year = (float) days / 365;
    temp = days % 365;

    printf("Total number of years %d and days %d", (int) year, temp);
}