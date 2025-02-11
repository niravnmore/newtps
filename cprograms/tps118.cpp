#include <stdio.h>

int main() {
	// Write a C program that accepts 10 integers from the user and 
	// stores them in an array. 
	// The program should then find and print the maximum and minimum values
	// in the array. 
	// Challenge: Extend the program to sort the array in ascending order.

	int arr[10];
	int i, max, min, temp;
	printf("Enter 10 integers: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0]; 
	min = arr[0];
	for (i = 1; i < 10; i++) {
		if (arr[i] > max) { // find max
			max = arr[i];
		}
		if (arr[i] < min) { // find min
			min = arr[i];
		}
	}
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	// Sort the array
	for (i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] > arr[j]) { // swap elements
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Sorted array: ");
	for (i = 0; i < 10; i++) {
		printf("%d, ", arr[i]);
	}

	return 0;
}
