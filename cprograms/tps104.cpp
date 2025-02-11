#include<stdio.h>
int main(){
	int ar1[3][3];
	int sum=0;
	for(int i=0;i<3;i++){
		printf("\nPlease enter 3 integer values ");
		for(int j=0;j<3;j++){
			scanf("%d", &ar1[i][j]);
		}
	}
	printf("\nStored integers are : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ", ar1[i][j]);
			sum = sum + ar1[i][j];
		}
		printf("\n");
	}
	// Sum calculation
	printf("\nSum of all numbers is %d", sum);
	return 0;
}
