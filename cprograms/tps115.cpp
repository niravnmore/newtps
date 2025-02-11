#include<stdio.h>

// Check if number is prime number
bool isPrime(int n){
	if (n <= 1) {
		return false; // 0 and 1 are not prime numbers
	}
	for (int i=2; i*i<=n; i++){
		if (n % i == 0){
			return false; // not a prime number
		}
	}
	return true; // a prime number
}

int main(){
	int myNumber;
	int j=0;
	
	printf("Please enter a number : ");
	scanf("%d", &myNumber);
	
	if(isPrime(myNumber)){
		printf("%d is a prime number.\n", myNumber);
	} else {
		printf("%d is not a prime number.\n", myNumber);
	}
	
	printf("Prime numbers between 1 and %d :\n", myNumber);
	for (int i=2; i<= myNumber; i++){
		if (isPrime(i)) {
			printf("%d, ", i);
			j++;
			if(j%10==0){
				printf("\n");
			}
		}
	}
	return 0;
}

