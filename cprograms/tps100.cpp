#include <stdio.h>

main() {
    // Print summation value for number provided by user, use for loop
    int i, n;
    int sum=0;
    printf("Please enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    	sum=sum+i;
	}
	printf("\n%d", sum);
}
