#include <stdio.h>

main() {
    // Declare variables
    int num, a, b;
    
    // Print number from 1 to 10
    // while loop
    a=1;
    while(a<=10){
    	printf("%d ", a);
    	a++;
	}
	printf("\n");
	
    // for loop
    for(int i=0;i<11;i++){
    	if(i!=0){
    		printf("%d ", i);
		}
	}
	printf("\n");
	// do..while loop
	b=1;
	do{
		printf("%d ", b);
		b++;
	} while(b<=10);
}
