// C Program to Print the Digits of a Two-Digit Number

#include <stdio.h>

int main()
{
    int num, first, second;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    first = num / 10;
    second = num % 10;

    printf("First digit = %d\n", first);
    printf("Second digit = %d", second);

    return 0;
}
