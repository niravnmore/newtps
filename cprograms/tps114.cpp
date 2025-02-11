#include<stdio.h>

int main()
{
	// Declare variables
	int a, b, c;

	// Assign values
	printf("Enter the value of first number: ");
	scanf("%d", &a);
	printf("Enter the value of second number: ");
	scanf("%d", &b);
	printf("Enter the value of third number: ");
	scanf("%d", &c);

	// Calculate largest number
	switch(a >= b)
	{
		case 1:
		switch(a >= c)
		{
			case 1:
				printf("Largest number is %d\n", a);
				break;
			case 0:
				printf("Largest number is %d\n", c);
				break;
		}
		break;
		case 0:
		switch(b >= c)
		{
			case 1:
				printf("Largest number is %d\n", b);
				break;
			case 0:
				printf("Largest number is %d\n", c);
				break;
		}
		break;
	}

	// Calculate smallest number
	switch(a<=b){
		case 1:
			switch(a<=c){
				case 1:
					printf("Smallest number is %d\n", a);
					break;
				case 0:
					printf("Smallest number is %d\n", c);
					break;
			}
			break;
		case 0:
			switch(b<=c){
				case 1:
					printf("Smallest number is %d\n", b);
					break;
				case 0:
					printf("Smallest number is %d\n", c);
					break;
			}
			break;
	}

	return 0;
}
