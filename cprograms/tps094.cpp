#include <stdio.h>

main() {
    // Print number in decending order from the number entered 
    // by user
    int a;
    
    printf("Please enter a number : ");
    scanf("%d", &a);
    
    // Print number from 10 to 1
    // while loop
	//    a=10;
    while(a>=1){
    	printf("%d ", a);
    	a--;
    	printf("\n");
	}
}
