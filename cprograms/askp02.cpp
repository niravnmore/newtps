#include <stdio.h> // Include standard input/output header

int main() {
    // Declare and initialize variables
    int age = 25;             // Integer variable
    char initials = 'A';       // Character variable
    float height = 5.9;       // Floating-point variable

    // Declare a constant
    const float PI = 3.14159; // Constant value

    // Print values
    printf("Age: %d\n", age);     // Age: 25
    printf("Initials: %c\n", initials);  //Initials: A
    printf("Height: %.1f\n", height);    //Height: 5.9
    printf("Value of PI: %.5f\n", PI);

    return 0; // Indicate successful execution
}
