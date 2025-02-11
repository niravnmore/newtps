#include <stdio.h>

int main() {
	// Write a C program that takes N numbers from the user and stores them 
	// in an array. The program should then calculate and 
	// display the sum of all array elements.
	// Modify the program to also find the average of the numbers.

	int n[100], i, sum = 0;
	float avg;

	printf("Enter the number of elements: ");
	scanf("%d", &i);

	for (int j = 0; j < i; j++) {
		printf("Enter number %d: ", j + 1);
		scanf("%d", &n[j]);
		sum += n[j];
	}

	// print array
	printf("Array: ");
	for (int j = 0; j < i; j++) {
		printf("%d ", n[j]);
	}
	printf("\n");

	/// print sum
	printf("Sum: %d\n", sum);

	// print average
	avg = (float)sum / i;
	printf("Average: %.2f\n", avg);
	
	return 0;
}
