#include<stdio.h>
main()
{
	char vowels[] = {'a', 'e', 'i', 'o', 'u'}; 
//	char consonants[]= {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	
	char str[100];
	int length,i,j,k;
	int nv=0;
	int nc=0;
	
	printf("\nEnter a String : ");
	scanf("%s",&str);
	
	for (length = 0; str[length] != '\0'; length++);
	
	for(i=0;i<length;i++)
	{
		for(j=0;j<4;j++)
		{
			if(str[i] == vowels[j])
			{
				nv++;	
			} else {
				nc++;
			}
		}
	}
	printf("Vowels are : %d", nv);
	printf("Consonants are : %d", nc);
}
