#include <stdio.h>

int main() {
    // Declare variables
    int num, mon;
    
    // Input integer from the user
    printf("Enter the an integer A: ");
    scanf("%d", &num);
    
    // Check number is odd or even
    if(num%2==0){
    	printf("\nInteger %d is even number.", num);
	} else {
		printf("\nInteger %d is odd number.", num);
	}
	printf("\n");
	// Input month number from the user
	printf("\nEnter number of the month :");
    scanf("%d", &mon);
    
    // Displaying month name
    switch(mon){
    	case 1:
            printf("\nMonth name is January");
            break;
        case 2:
            printf("\nMonth name is February");
            break;
        case 3:
            printf("\nMonth name is March");
            break;
        case 4:
            printf("\nMonth name is April");
            break;
        case 5:
            printf("\nMonth name is May");
            break;
        case 6:
            printf("\nMonth name is June");
            break;
        case 7:
            printf("\nMonth name is July");
            break;
        case 8:
            printf("\nMonth name is August");
            break;
        case 9:
            printf("\nMonth name is September");
            break;
        case 10:
            printf("\nMonth name is October");
            break;
        case 11:
            printf("\nMonth name is November");
            break;
        case 12:
            printf("\nMonth name is December");
            break;
        default:
            printf("\nMonth number is invalid");
	}
    return 0;
}
