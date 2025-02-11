#include<stdio.h>

main() {
    // Check which of the three numbers is greatest
    int n1, n2, n3;
    printf("Enter number n1: ");
    scanf("%d", & n1);
    printf("Enter number n2: ");
    scanf("%d", & n2);
    printf("Enter number n3: ");
    scanf("%d", & n3);

    if (n1 > n2) {
        if (n1 > n3) {
            printf("\nn1 is greatest");
        } else {
            printf("\nn3 is greatest");
        }
    } else {
        if (n2 > n3) {
            printf("\nn2 is greatest");
        } else {
            printf("\nn3 is greatest");
        }
    }
}