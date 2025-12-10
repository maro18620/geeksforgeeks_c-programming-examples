#include <stdio.h>

int main(void)
{
	int year = 0;

	printf("Enter the year: ");
	scanf("%d", &year);

	if (year % 400 == 0)
		printf("Leap year\n");
	else if (year % 100 == 0)
		printf("Not a Leap year\n");
	else if (year % 4 == 0)
		printf("Leap year\n");
	else
		printf("Not a Leap year\n");
	
	return (0);
}
