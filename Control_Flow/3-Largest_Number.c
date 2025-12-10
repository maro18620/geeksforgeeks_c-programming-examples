#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;

	printf("Enter value of your first number: ");
	scanf("%d", &num1);
	printf("Enter value of your second number: ");
	scanf("%d", &num2);
	printf("Enter value of your third number: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
		printf("%d is the largest number\n", num1);
	else if (num2 > num1 && num2 >  num3)
		printf("%d is the largest number\n", num2);
	else if (num3 > num1 && num3 >  num2)
		printf("%d is the largest number\n", num3);
	else
		printf("numbers are equals\n");
	
	return (0);
}