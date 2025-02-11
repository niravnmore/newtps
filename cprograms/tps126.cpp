#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j=0;
	bool con=true;
	char strrv[100], rvstr[100];

	char st1[20], st2[20], res[50];
	
	int strlen;

	while(j<=3)
	{
		printf("\n");
		printf("\n");
		printf("Main Menu\n");
		printf("\t1. Reverse a string.\n");
		printf("\t2. Concatenation.\n");
		printf("\t3. Palindrome.\n");
		printf("\t4. Copy a string.\n");
		printf("\t5. Length of the string.\n");
		printf("\t6. Frequency of character in s string.\n");
		printf("\t7. Find number of vowels and consonants.\n");
		printf("\t8. Find number of blank spaces and digits.\n");
	
		printf("\n");
		printf("\nSelect An Option : ");
		scanf("%d",&n);
		printf("\nSelected Option Is : %d",n);
		
		switch(n)
		{
			case 1:
				printf("\nEnter a String : ");
				scanf("%s",&strrv);
			
				for (strlen = 0; strrv[strlen] != '\0'; strlen++); // find length of string
			
				for (i = strlen -1; i >=0; i-- )
				{
					rvstr[strlen - 1 - i] = strrv[i];
				}
				printf("\n%s", rvstr);
				break;
			case 2:
				printf("\nEnter a string :");
    			//fgets(st1, sizeof(st1), stdin); // Read string
    			scanf("%s", &st1);
//    			st1[strcspn(st1, "\n")] = '\0'; // remove newline character

				printf("\nEnter another string :");
    			//fgets(st2, sizeof(st2), stdin);
    			scanf("%s", &st2);
//    			st2[strcspn(st2, "\n")] = '\0';

    			strcpy(res, st1); // copy string in new variable
    			strcat(res, st2); // Concatenate strings
    			printf("\n%s", res); // print string
   				//printf("\nLength of string : %lu", strlen(res));
   				break;
			default :
				break;
		}
			
			
		
		 
		
		i++;
	}
	
}