#include <stdio.h>

main() {
    // Check age eligibility for voting with invalid age check
    int n;
    printf("Enter age : ");
    scanf("%d", & n);
    if (n > 100) {
        printf("Invalid age!!");
    } else if (n >= 18) {
        printf("Eligible for vote!!");
    } else {
        printf("Not eligible for vote!!");
    }
}