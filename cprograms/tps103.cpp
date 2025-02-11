#include<stdio.h>
// Write a C program that stores 5 integers in a one-dimensional array and prints them. 
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
int main(){
	int ar1[5];
	printf("Please enter 5 integer values ");
	for(int i=0;i<5;i++){
		scanf("%d", &ar1[i]);
	}
	printf("\nStored integers are :");
	for(int i=0;i<5;i++){
		printf("\n%d", ar1[i]);
	}
	return 0;
}
