#include <stdio.h>

int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	
	int n, i;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fibonacci series: ");

	for (i = 0; i < n; i++) {
		printf("%d ", fib(i));
	}
	printf("\n");

	// iterative method
	int a = 0, b = 1, c;
	for (i = 0; i < n; i++) {
		if (i <= 1) {
			c = i;
		} else {
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("Nth Fibonacci number using iterative method: %d\n", c);

	// recursive method
	printf("Nth Fibonacci number using recursive method: %d\n", fib(n - 1));
	
	return 0;
}
