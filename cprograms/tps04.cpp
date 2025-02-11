#include<stdio.h>

main() {
    // switch variable with temporary variable
    int a, b, temp;
    printf("Enter value a : ");
    scanf("%d", & a);
    printf("Enter value b : ");
    scanf("%d", & b);

    temp = a;
    a = b;
    b = temp;

    printf("\nvalue a : %d", a);
    printf("\nvalue b : %d", b);
}