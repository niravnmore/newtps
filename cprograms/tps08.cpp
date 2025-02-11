#include<stdio.h>

main() {
    // Convert number of months into number of years
    int month;
    printf("Enter value for month : ");
    scanf("%d", & month);
    float year;
    year = (float) month / 12;
    printf("Value for years : %f", year);
}