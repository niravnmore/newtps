#include <stdio.h>

main() {
    // Print factorial value for number provided by user, use for loop
    int i, n;
    int fac=1;
    printf("Please enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	fac=fac*i;
	}
	printf("\n%d", fac);
}
