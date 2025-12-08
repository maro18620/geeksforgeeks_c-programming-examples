#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print your own number
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num = 0;

	printf("Enter your number: ");
	scanf("%d", &num);
	printf("your num is: %d\n", num);
	return (0);
}
