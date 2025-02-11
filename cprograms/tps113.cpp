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

	// Calculate largest number and smallest number
	if(a >= b){ // a>=b
		if(a >= c){  // a>=b and a>=c
			if(c >= b){  // a>=b and a>=c and c>=b
				printf("Largest number is: %d\n", a);
				printf("Smallest number is: %d\n", b);
			}
			else{ // a>=b and a>=c and b>=c
				printf("Largest number is: %d\n", a);
				printf("Smallest number is: %d\n", c);
			}
		}
		else{ // a>=b and c>=a
			printf("Largest number is: %d\n", c);
			printf("Smallest number is: %d\n", b);
		}
	}
	else{
		if(b >= c){
			if(c >= a){ // b>=a and b>=c and c>=a
				printf("Largest number is: %d\n", b);
				printf("Smallest number is: %d\n", a);
			}
			else{ // b>=a and b>=c and a>=c
				printf("Largest number is: %d\n", b);
				printf("Smallest number is: %d\n", c);
			}
		}
		else{
			if(a >= b){ // c>=b and c>=a and a>=b
				printf("Largest number is: %d\n", c);
				printf("Smallest number is: %d\n", b);
			}
			else{ // c>=b and c>=a and b>=a
				printf("Largest number is: %d\n", c);
				printf("Smallest number is: %d\n", a);
			}
		}
	}
	return 0;
}
