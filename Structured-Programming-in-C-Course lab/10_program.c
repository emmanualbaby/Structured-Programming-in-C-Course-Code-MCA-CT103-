// C Program to Find the Largest of Two Numbers

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Largest number = %d", a);
    }
    else if (b > a)
    {
        printf("Largest number = %d", b);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}
