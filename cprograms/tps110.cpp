#include<stdio.h>

int main(){
	// declare variables
	int nu1, nu2;
	char operation;
	
	// Get input values and operator
	printf("Please enter first number : ");
	scanf("%d", &nu1);
	
	printf("\nPlease select any one operator(+,-,*,/,%%): ");	
	scanf(" %c", &operation);
	
	printf("\nPlease enter second number : ");
	scanf("%d", &nu2);

	switch(operation){
		case '+':
			printf("Result: %d\n", nu1+nu2);
			break;
		case '-':
			printf("Result: %d\n", nu1-nu2);
			break;
		case '*':
			printf("Result: %d\n", nu1*nu2);
			break;
		case '/':
			if(nu2 != 0){
				printf("Result: %.2f\n", (float)nu1 / nu2);
				break;
			} else {
				printf("Division by zero is not allowed.\n");
				break;
			}
		case '%':
			if(nu2 != 0){
				printf("Result: %d\n", (nu1%nu2));
				break;
			} else {
				printf("Division by zero is not allowed.\n");
				break;
			}
		default:
			printf("Selected operator is invalid.\n");
	}	
}
