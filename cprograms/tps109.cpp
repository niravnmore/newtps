#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100] = "example.txt"; // File name
    char content[100];

    // Step 1: Create a file and write a string into it
    file = fopen(filename, "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error: Unable to create file.\n");
        exit(1);
    }

    printf("Enter a string to write to the file: ");
    fgets(content, sizeof(content), stdin); // Read a string from the user

    fprintf(file, "%s", content); // Write the string to the file
    fclose(file); // Close the file after writing
    printf("String written to file successfully.\n");

    // Step 2: Open the file again and read its contents
    file = fopen(filename, "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error: Unable to open file.\n");
        exit(1);
    }

    printf("\nContents of the file:\n");
    while (fgets(content, sizeof(content), file) != NULL) { // Read and print the file contents
        printf("%s", content);
    }

    fclose(file); // Close the file after reading

    return 0;
}

