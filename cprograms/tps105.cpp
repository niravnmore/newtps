#include <stdio.h>
int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value pointed by ptr: %d\n", *ptr);	
    printf("Address stored in ptr: %p\n", ptr);

    return 0;
}

