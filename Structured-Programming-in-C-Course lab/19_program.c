// C Program to Display Even Numbers Up to a Given Limit 


#include <stdio.h>

int main()
{
    int i, limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    i = 2;

    while (i <= limit)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    return 0;
}
