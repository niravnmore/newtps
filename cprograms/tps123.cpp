#include <stdio.h>

// Iterative version
int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

// Recursive version
int factorial_recursive(int n){
		if (n == 0) {
			return 1;
		}
		return n * factorial_recursive(n - 1);
	}

int main() {

	
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	// Iterative version
	printf("Factorial of %d is %d\n", n, factorial(n));

	// Recursive version
	printf("Factorial of %d is %d\n", n, factorial_recursive(n));

	// Performance comparison
	// The recursive version is slower than the iterative version because it has to make a function call for each recursive call.
	
	return 0;
}
