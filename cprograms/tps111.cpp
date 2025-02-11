#include<stdio.h>

int main()
{
	// Declare a variable
	int a;
	printf("Please enter a number: ");
	scanf(" %d", &a);

	if (a % 2 == 0)
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}

	if (a > 0)
	{
		printf("The number is positive\n");
	}
	else if (a < 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is zero\n");
	}

	if (a%3 == 0 && a%5 == 0)
	{
		printf("The number is divisible by 3 and 5\n");
	}
	else if (a%3 == 0)
	{
		printf("The number is divisible by 3\n");
	}
	else if (a%5 == 0)
	{
		printf("The number is divisible by 5\n");
	}
	else
	{
		printf("The number is not divisible by 3 or 5\n");
	}
	return 0;
}
