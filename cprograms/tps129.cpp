#include<stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i,j;
    
    char vov[] = {'a', 'e', 'i', 'o', 'u'};
    int nc,nv=0;
    
    printf("\nEnter a string :::");
    scanf("%s", &str);

    // Loop through the string until the null terminator is found
    while (str[length] != '\0') {
        length++;
    }
    
    for (i=0;i<length;i++)
    {
    	for (j=0;vov[j] != '\0';j++)
    	{
    		if (str[i] == vov[j]){
    			nv++;
			}
		}
	}
	
	nc = length - nv;
    
    printf("\nString length is %d", length);
    printf("\nNumber of vovwels is %d", nv);
	printf("\nNumber of consonents is %d", nc);
    
    return 0;
}
