#include <stdio.h>
int main() {
	//Write a C program to demonstrate pointer usage. 
	//Use a pointer to modify the value of a variable and print the result.
    int num = 21;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    *ptr = 39
    printf("Value of num after : %d\n", num);

    return 0;
}

