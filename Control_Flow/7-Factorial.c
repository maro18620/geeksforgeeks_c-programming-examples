#include <stdio.h>

int main(void)
{
    unsigned int num = 0;
    unsigned int fact = 1;
    unsigned int i = 0;

    printf("Give a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d\n", num, fact);

    return (0);
}