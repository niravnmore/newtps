#include<stdio.h>

main() {
    // Check if a number is even or odd
    int n;
    printf("Enter a number : ");
    scanf("%d", & n);
    if (n == 0) {
        printf("Neither even nor odd!!");
    } else if (n % 2 == 0) {
        printf("%d is even number!!", n);
    } else {
        printf("%d is odd number!!", n);
    }
}