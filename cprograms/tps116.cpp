#include <stdio.h>

int main() {
	printf("Multiplication table creator:\n");
	int n, range;

	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the range: ");
	scanf("%d", &range);

	for (int i = 1; i <= range; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
