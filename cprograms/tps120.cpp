#include <stdio.h>

int main() {
	
	int a[3][3], b[3][3], c[3][3], d[3][3];
	int i, j, k;

	printf("Enter the first matrix: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// Display the first matrix
	printf("The first matrix is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter the second matrix: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	// Display the second matrix
	printf("The second matrix is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// Addition of two matrices
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	// Display the result of addition
	printf("The result of addition is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// Multiplication of two matrices
	d[0][0] = a[0][0]*b[0][0] + a[0][1]*b[1][0] + a[0][2]*b[2][0];
	d[0][1] = a[0][0]*b[0][1] + a[0][1]*b[1][1] + a[0][2]*b[2][1];
	d[0][2] = a[0][0]*b[0][2] + a[0][1]*b[1][2] + a[0][2]*b[2][2];

	d[1][0] = a[1][0]*b[0][0] + a[1][1]*b[1][0] + a[1][2]*b[2][0];
	d[1][1] = a[1][0]*b[0][1] + a[1][1]*b[1][1] + a[1][2]*b[2][1];
	d[1][2] = a[1][0]*b[0][2] + a[1][1]*b[1][2] + a[1][2]*b[2][2];

	d[2][0] = a[2][0]*b[0][0] + a[2][1]*b[1][0] + a[2][2]*b[2][0];
	d[2][1] = a[2][0]*b[0][1] + a[2][1]*b[1][1] + a[2][2]*b[2][1];
	d[2][2] = a[2][0]*b[0][2] + a[2][1]*b[1][2] + a[2][2]*b[2][2];

	// Display the result of multiplication
	printf("The result of multiplication is: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	return 0;
}
