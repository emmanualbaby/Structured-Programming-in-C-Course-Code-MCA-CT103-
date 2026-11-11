// C Program to Display Whether a Number is Odd or Even Using If-Else Statement

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    return 0;
}
