#include <stdio.h>

int main() {
	
	int num, sum = 0, remainder;
	printf("Enter an integer: ");
	scanf("%d", &num); // 1234
	int temp = num;
	while (temp != 0) {
		remainder = temp % 10; // 4 - 3 - 2 - 1
		sum = sum + remainder; // 4 - 7 - 9 - 10
		temp = temp / 10; // 123 - 12 - 1 - 0
	}

	printf("Sum of digits: %d\n", sum);

	// Reverse the digits
	int reversed = 0;
	temp = num;
	while (temp != 0) {
		remainder = temp % 10; // 4 - 3 - 2 - 1
		reversed = reversed * 10 + remainder; // 4 - 43 - 432 - 4321
		temp = temp / 10; // 123 - 12 - 1 - 0
	}
	printf("Reversed number: %d\n", reversed);
	return 0;
}
