#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("Enter your number: ");
	scanf("%d", &num);

	if(num % 2 == 0)
		printf("Even\n");
	else
		printf("odd\n");
}