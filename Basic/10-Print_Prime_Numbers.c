#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(unsigned int num);

int main(void)
{
    int i = 0;
    int num;
    
    printf("Enter your number: ");
    scanf("%d", &num);

    printf("prime numbers: ");
    for (i = 1; i <= num; i++)
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

bool isPrime(unsigned int num)
{
    if (num < 1)
        return (false);
    
    int i = 2;

    for (i; i <= sqrt(num); i++)
    {
        if((num % i) == 0)
            return (false);
    }
    return (true);
}