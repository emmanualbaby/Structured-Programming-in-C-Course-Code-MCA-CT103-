// C Program to Identify and Display Even and Odd Numbers Given by the User 

#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Even numbers are:\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers are:\n");

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
