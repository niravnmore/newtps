#include <stdio.h>
#include <string.h> // header file for managing strings

int main() {

    // Declare strings
    char st1[20], st2[20], res[50];
    
    //get strings
    printf("Enter a string :");
    fgets(st1, sizeof(st1), stdin); // Read string
    st1[strcspn(st1, "\n")] = '\0'; // remove newline character
	
	printf("\nEnter another string :");
    fgets(st2, sizeof(st2), stdin);
    st2[strcspn(st2, "\n")] = '\0';
    
    strcpy(res, st1); // copy string in new variable
    strcat(res, st2); // Concatenate strings
    printf("\n%s", res); // print string
    printf("\nLength of string : %lu", strlen(res)); // print length of string
}
