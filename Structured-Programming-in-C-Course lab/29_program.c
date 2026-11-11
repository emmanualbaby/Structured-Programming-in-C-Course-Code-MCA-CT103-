// C Program to Calculate nCr Using Functions (Factorial Method)

#include <stdio.h>

long int factorial(int n)
{
    int i;
    long int fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, r;
    long int ncr;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    if(n < 0 || r < 0 || r > n || n > 20)
    {
        printf("Invalid input");
    }
    else
    {
        ncr = factorial(n) /
              (factorial(r) * factorial(n-r));

        printf("nCr = %ld", ncr);
    }

    return 0;
}
