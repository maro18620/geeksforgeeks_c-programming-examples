#include <stdio.h>

int main(void)
{
	int i = 0;

	printf("Alphabets from (A-Z) are:\n");
	// ASCII value of A=65 and Z=90
	for(i = 65; i <= 90; i++)
		printf("%c", i);
	printf("\n");
	
	printf("\nAlphabets from (a-z) are:\n");
	// ASCII value of a=97 and z=122
	for(i = 97; i <= 122; i++)
		printf("%c", i);
	printf("\n");

	return (0);
}
