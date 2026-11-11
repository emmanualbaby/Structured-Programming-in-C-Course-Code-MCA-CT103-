// C Program to Accept 100 Numbers into an Array and Display Them

#include <stdio.h>

int main()
{
    int a[100], i;

    printf("Enter 100 numbers:\n");

    for(i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The numbers are:\n");

    for(i = 0; i < 100; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
