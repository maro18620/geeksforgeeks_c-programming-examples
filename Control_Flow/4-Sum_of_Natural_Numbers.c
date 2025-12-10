#include <stdio.h>

int main(void)
{
    int num = 0;
    int i = 0;
    int sum = 0;

    printf("Enter Natural number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    
    printf("Sum = %d\n", sum);

    return (0);
}