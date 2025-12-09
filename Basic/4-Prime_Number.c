#include <stdio.h>

int main(void)
{
	int num = 0;
	int cnt = 0;

	printf("Enter your number: ");
	scanf("%d", &num);

	if (num < 1)
		printf("%d is NOT prime\n", num);
	else
	{
		int i;
		for(i = 1; i <= num; i++)
		{
			if((num % i) == 0)
				cnt++;
		}

		if (cnt > 2)
			printf("%d is NOT prime\n", num);
		else
			printf("%d is prime\n", num);
	}

	return (0);
}
