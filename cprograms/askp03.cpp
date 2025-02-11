#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;             // Integer variable
    
    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    // Arithmetic operation
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // Relational operation
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d : %d\n", num1, num2, num1 > num2);
    printf("%d < %d : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);
	
	// Logical operation
	printf("(%d > 0) && (%d > 0): %d\n", num1, num2, (num1 > 0) && (num2 > 0));
    printf("(%d > 0) || (%d > 0): %d\n", num1, num2, (num1 > 0) || (num2 > 0));
    printf("!(%d > %d): %d\n", num1, num2, !(num1 > num2));
	
    return 0; // Indicate successful execution
}
