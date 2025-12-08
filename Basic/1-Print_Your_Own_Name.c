#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print your own name
 *
 * Return: 0 (success)
*/
int main(void)
{
	char name[10] = "unknown";

	printf("Enter your name: ");
	scanf(" %s", name);
	printf("your name is: %s\n", name);
	return (0);
}
