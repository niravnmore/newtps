#include <stdio.h>

int main() {
	
	int a[2][2], b[2][2], c[2][2], d[2][2];
	int i, j;

	printf("Enter the elements of the first 2x2 matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	// print the first matrix
	printf("The first matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter the elements of the second 2x2 matrix: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	// print the second matrix
	printf("The second matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// add the two matrices
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// print the resultant matrix
	printf("The resultant matrix is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// matrix multiplication
	d[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0];
	d[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1];
	d[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0];
	d[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1];

	// print the resultant matrix
	printf("The resultant matrix after multiplication is: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	return 0;
}
