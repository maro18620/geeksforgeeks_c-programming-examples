#include <stdio.h>

int main(void)
{
	int a = 5, b = 10, temp;

	printf("before swaping a = %d, b = %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("after swaping a = %d, b = %d\n", a, b);

	return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	int a = 5, b = 10;

// 	printf("before swaping a = %d, b = %d\n", a, b);
// 	a = a + b;
// 	b = a - b;
// 	a = a - b;
// 	printf("after swaping a = %d, b = %d\n", a, b);
// 	return (0);
// }

// #include <stdio.h>

// int main(void)
// {
// 	int a = 5, b = 10;

// 	printf("before swaping a = %d, b = %d\n", a, b);
// 	a = a ^ b;
// 	b = a ^ b;
// 	a = a ^ b;
// 	printf("after swaping a = %d, b = %d\n", a, b);

// 	return (0);
// }
