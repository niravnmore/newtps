#include<stdio.h>

main() {
    // Check if a number is greater than another number
    int n, m;
    printf("Enter number A: ");
    scanf("%d", & n);

    printf("Enter number B: ");
    scanf("%d", & m);

    printf("A = %d", n);
    printf("\nB = %d", m);

    if (n > m) {
        printf("\nNumber A is greater than number B");
    } else {
        printf("\nNumber A is not greater than number B");
    }
}