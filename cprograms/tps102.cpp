#include <stdio.h>

// Write a C program that calculates the factorial of a number using a function. 
// Include function declaration, definition, and call.

int factorial(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	return fac;
}

main(){
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	printf("\nFactorial value is %d", factorial(a));
}
