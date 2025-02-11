#include <stdio.h>

main()                                                           {
    // Write a C program that uses the break statement to stop 
	// printing numbers when it reaches 5. 
	// Modify the program to skip printing the number 3 
	// using the continue statement.
    int a                                                        ;
    
    a=1                                                          ;
    while(a<=10)                                                 {
	//    	if(a==5)                                                 {
	//    		break                                                   ;
	//		                                                            }
		if(a==3)                                                       {
			a++                                                           ;
			continue                                                      ;
		}else                                                          {
			printf("%d ", a)                                              ;
    		a++                                                        ;}}
	printf("\n")                                                    ;}
