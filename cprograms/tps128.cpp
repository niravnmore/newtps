#include<stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0;

    // Loop through the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }
    
    printf("\n%d", length);
}
