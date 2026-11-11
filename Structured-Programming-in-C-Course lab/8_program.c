// Program to Print the Sum of the Digits of a Two-Digit Number

#include <stdio.h>

int main()
{
    int num, first, second, sum;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    first = num / 10;
    second = num % 10;

    sum = first + second;

    printf("Sum of digits = %d", sum);

    return 0;
}
