#include <stdio.h>

int main(void)
{
    char ch = 'A';

    // aeiouAEIOU
    printf("Enter Character: ");
    scanf("%c", &ch);
    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'O' || ch == 'o' || ch == 'u' || ch == 'u')
        printf("vowel\n");
    else
        printf("consonant\n");

    return (0);
}