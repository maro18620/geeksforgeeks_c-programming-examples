#include <stdio.h>

int main(void)
{
	float Principal;
	float Rate;
	float time;

	printf("Enter Principal: ");
	scanf("%f", &Principal);
	printf("Enter Rate: ");
	scanf("%f", &Rate);
	printf("Enter time: ");
	scanf("%f", &time);
	printf("Simple Interest: %.2f\n", Principal * Rate * time / 100);

	return (0);
}