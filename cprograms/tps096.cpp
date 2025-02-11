#include <stdio.h>

main() {
    // Print summation of numbers from the number to 1. Number provided by user
    int a;
    int i=1,sum=0;
    printf("Please enter a number : ");
    scanf("%d", &a);
    while(i<=a){
    	sum=sum+i; //0+1=1, 1+2=3, 3+3=6, 6+4=10, 10+5=15
    	i++;
	}
	printf("Summation of numbers for %d is %d", a, sum);
}
