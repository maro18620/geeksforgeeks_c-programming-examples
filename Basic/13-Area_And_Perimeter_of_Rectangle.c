#include <stdio.h>

int main(void)
{
    int l, b;

    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    printf("Area of rectangle is : %d\n", (l * b));
    printf("Perimeter of rectangle is : %d\n", (2 * (l + b)));

    return (0);
}