#include <stdio.h>
/**
 * main - entry point
 *
 * Description: add two numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	printf("Enter your first number: ");
	scanf("%d", &num1);
	printf("Enter your second number: ");
	scanf("%d", &num2);
	printf("the result: %d", num1 + num2);

	return (0);
}
