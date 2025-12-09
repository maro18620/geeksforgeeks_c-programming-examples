#include <stdio.h>

int main(void)
{
    float f = 0;

    printf("Temperature in Degree Fahrenheit: ");
    scanf("%f", &f);
    printf("Temperature in Degree Celsius : %.2f\n",  ((f) - 32) * 5/9  );

    return (0);
}
