//Example 6 - command line arguments

#include <stdio.h>
 
main(int argc, char *argv[])
{
   int c;
 
   printf("Number of command line arguments passed: %d\n", argc);
 
   for ( c = 0 ; c < argc ; c++)
      printf("%d. Command line argument passed is %s\n", c+1, argv[c]);
 
   return 0;
}
/*Above c program prints the number and all arguments which are passed to it.
*/