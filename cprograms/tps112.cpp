#include<stdio.h>

int main()
{
	// Declare a variable
	int marks;
	printf("Please enter student's marks :");
	scanf("%d", &marks);

	if(marks > 50) // Check if the marks are greater than 50
	{
		if(marks > 75) // Check if the marks are greater than 75
		{
			if(marks > 90) // Check if the marks are greater than 90
			{
				printf("Grade A\n");
			}
			else
			{
				printf("Grade B\n");
			}
		}
		else
		{
			printf("Grade C\n");
		}
	}
	else
	{
		printf("Grade D\n");
	}
	return 0;
}
