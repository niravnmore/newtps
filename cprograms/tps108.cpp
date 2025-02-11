#include <stdio.h>

// Define the structure to store student details
struct Student {
    char name[50];
    int rollnum;
    int marks;
};

int main() {
    struct Student students[3]; // Array of structures for 3 students

    // Input details of each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollnum);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("\n");
    }

    // Print details of each student
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollnum);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

