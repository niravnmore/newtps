#include <stdio.h>

int main() {
	
	int num, reversedNum = 0, remainder, originalNum;
	printf("Enter an integer: ");
	scanf("%d", &num);
	originalNum = num;

	// reversed integer is stored in reversedNum
	while (num != 0) {
		remainder = num % 10;
		reversedNum = reversedNum * 10 + remainder;
		num /= 10;
	}

	// palindrome if orignalNum and reversedNum are equal
	if (originalNum == reversedNum)
		printf("%d is a palindrome.\n", originalNum);
	else
		printf("%d is not a palindrome.\n", originalNum);

	// Challenge: Modify the program to check if a given string is a palindrome.
	char str[100];
	int i, length;
	int flag = 0;
	printf("Enter a string: ");
	scanf("%s", str);

	// Find the length of the string
	for (length = 0; str[length] != '\0'; length++);

	// Check if the string is palindrome or not
	for (i = 0; i < length; i++) {
		if (str[i] != str[length - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag)
		printf("%s is not a palindrome.\n", str);
	else
		printf("%s is a palindrome.\n", str);
	
	return 0;
}
