#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("Enter your number: ");
	scanf("%d", &num);
	if (num < 0)
		printf("Negative\n");
	else if (num > 0)
		printf("Positive\n");
	else
		printf("Zero\n");
	
	return (0);
}