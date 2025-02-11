#include<stdio.h>

main() {
    // switch variables without temporary variable
    int a, b, temp;
    printf("Enter value a : ");
    scanf("%d", & a);
    printf("Enter value b : ");
    scanf("%d", & b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nvalue a : %d", a);
    printf("\nvalue b : %d", b);
}