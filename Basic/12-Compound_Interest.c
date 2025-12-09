#include <stdio.h>
#include <math.h>

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
	printf("Compound Interest: %.2f\n", Principal * pow((1 + Rate / 100), time));

	return (0);
}
