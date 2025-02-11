//Example 2 - c program to take input from user using scanf

#include <stdio.h>
 
main()
{
   int number;
 
   printf("Enter an integer\n");
   scanf("%d",&number);
 
   printf("Integer entered by you is %d\n", number);
 
   return 0;
}
/*Output:
Enter a number
5
Number entered by you is 5*/