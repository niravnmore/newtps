#include<stdio.h>
#include<string.h>

int spacecount(char str[])
{
	int m;
	int sc=0;
	for (m = 0; str[m] != '\0'; m++) 
	{
		printf("%d",m);
        if (str[m] == ' ') //Check if the character is a space 
		{ 
           	sc++; 
        } 
    }
    return sc;
}

int digitcount(char str[])
{
	int p;
	int dc=0;
	for (p = 0; str[p] != '\0'; p++) 
	{
        if (str[p] >= '0' && str[p] <= '9') 
		{
            dc++;
        }
    }
    return dc;
}

main()
{
	int n,i,j=0;
	bool con=true;
	char strrv[100], rvstr[100];
	char st1[20], st2[20], res[50], sto[50];
	int strlen;
	int num, reversedNum = 0, remainder, originalNum;
	char str[1000];
	int flag = 0;
    int length;
    char ite;
    char strt[100];
	char src[100], dest[100];
	char ch;
    int count = 0;
    char vov[] = {'a', 'e', 'i', 'o', 'u'};
    int nc,nv=0;
	int m,p,spacecount1 = 0, digitcount1 = 0;
	int i1;
	
	while(j<=3)
	{
		printf("\n");
		printf("\n");
		printf("Main Menu\n");
		printf("\t1.Reverse a string\n");
		printf("\t2.Concatenation\n");
		printf("\t3.Palindrome\n");
		printf("\t4.Copy a string\n");
		printf("\t5.Length of the string\n");
		printf("\t6.Frequency of character in s string\n");
		printf("\t7.Find number of vowels and consonants\n");
		printf("\t8.Find number of blank spaces and digits \n");
	
		printf("\n");
		printf("\nSelect An Option : ");
		scanf("%d",&n);
		printf("\nSelected Option Is : %d",n);
		
		switch(n)
		{
			case 1:
//				printf("\nEnter a String : ");
//				scanf("%s",&strrv);
//			
//				for (strlen = 0; strrv[strlen] != '\0'; strlen++); // find length of string
//			
//				for (i = strlen -1; i >=0; i-- )
//				{
//					rvstr[strlen - 1 - i] = strrv[i];
//				}
//				printf("\n%s", rvstr);
				break;
			case 2:
//				printf("\nEnter a string :");
//    			//fgets(st1, sizeof(st1), stdin); // Read string
//    			scanf("%s", &st1);
//	   			//st1[strcspn(st1, "\n")] = '\0'; // remove newline character
//
//				printf("\nEnter another string :");
//    			//fgets(st2, sizeof(st2), stdin);
//    			scanf("%s", &st2);
//    			//st2[strcspn(st2, "\n")] = '\0';
//
//    			strcpy(res, st1); // copy string in new variable
//    			strcat(res, st2); // Concatenate strings
//    			printf("\n%s", res); // print string
//   				//printf("\nLength of string : %lu", strlen(res));
   				break;
   			
   			case 3:
//   				printf("\nEnter a string: ");
//				scanf("%s", str);
//
//	
//				for (length = 0; str[length] != '\0'; length++); // Find the length of the string
//
//				for (i = 0; i < length; i++) // Check if the string is palindrome or not
//				{
//		
//					if (str[i] != str[length - i - 1]) 
//					{
//						flag = 1;
//						break;
//					}
//				}
//	
//				if (flag ==1)
//				{
//					printf("\nThis string is not a Palindrome");
//				} 
//				else 
//				{
//					printf("\nThis string is a Palindrome");
//				}
				break;
			case 4:
				printf("\nEnter a String : ");
				scanf("%s",&st1);
	
				for (length = 0; st1[length] != '\0'; length++);
	
				for(i=0;i<length;i++)
				{
					st2[i] = st1[i];
				}
				printf("\n%s",st2);
    			break;
    			
    		case 5:
    			printf("\nEnter a string: ");
				scanf("%s", str);

				for (length = 0; str[length] != '\0'; length++); // Find the length of the string
				printf("\nLength is %d",length);

				break;
			
			case 6:
				printf("\n Enter a string :");
				scanf("%s", &strt);
	
				printf("\nSelect a character :");
				scanf("%s", &ite);
	
				for (length = 0; strt[length] != '\0'; length++);
	

				for (int i = 0; i < length; i++)
				{
					if(ite == strt[i])
					{
						count++;
					}
				}
				printf("\nFrequency of %c : %d", ite, count);
				break;		
				
			case 7:
				printf("\nEnter a string : ");
    			scanf("%s", &str);

    			while (str[length] != '\0') // Loop through the string until the null terminator is found
				{
       				length++;
   				}
    
    			for (i1=0;i1<length;i1++)
    			{
    				for (j=0;vov[j] != '\0';j++)
    				{
    					if (str[i1] == vov[j])
						{
    						nv++;
						}
					}
				}
	
				nc = length - nv;
    
    			printf("\nNumber of Vowels is : %d", nv);
				printf("\nNumber of Consonents is : %d", nc);
				break;
			case 8:
				printf("\nEnter a string:");
//				scanf("%s",&sto);				
    			fgets(sto, sizeof(sto), stdin);
				printf("%s",sto);
				
				
//				
//    			for (m = 0; str[m] != '\0'; m++) 
//				{
//					printf("%d",m);
//        			if (str[m] == ' ') //Check if the character is a space 
//					{ 
//           				spacecount++; 
//        			} 
//    			}
//    			for (p = 0; str[p] != '\0'; p++) 
//				{
//        			if (str[p] >= '0' && str[p] <= '9') 
//					{
//            			digitcount++;
//        			}
//    			}

    			printf("\nNumber of digits: %d", digitcount(str));
    			printf("\nNumber of spaces: %d", spacecount(str));
 				
			default :
				break;
		}		
//		i++;
	}
	return 0;
	
}
