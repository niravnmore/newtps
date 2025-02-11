#include <stdio.h>

main() {
    // Print numbers 1 to number, number provided by user, use for loop
    int i, n;
    printf("Please enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	printf("\n%d", i);
	}
}
