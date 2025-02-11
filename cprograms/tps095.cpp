#include <stdio.h>

main() {
    // Print factorial number from the number entered by user
    int a;
    int i=1,fac=1;
    printf("Please enter a number : ");
    scanf("%d", &a);
    while(i<=a){
    	fac=fac*i;
    	i++;
	}
	printf("Factorial number of %d is %d", a, fac);
}
