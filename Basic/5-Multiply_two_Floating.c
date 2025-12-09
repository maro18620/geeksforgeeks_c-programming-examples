#include <stdio.h>

int main(void)
{
	float num1, num2;

	printf("Enter your first floating number: ");
	scanf("%f", &num1);
	printf("Enter your second floating number: ");
	scanf("%f", &num2);
	printf("The result: %.2f\n", num1*num2);

	return (0);
}