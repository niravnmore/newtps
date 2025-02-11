#include <stdio.h>

main() {
    // Check age eligibility for voting
    int n;
    printf("Enter age : ");
    scanf("%d", & n);
    if (n >= 18) {
        printf("Eligible for vote!!");
    } else {
        printf("Not eligible for vote!!");
    }
}