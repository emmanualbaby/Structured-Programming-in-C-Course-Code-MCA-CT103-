// C Program to Display "Good Morning" Until the User Enters 0

#include <stdio.h>

int main()
{
    int num;

    do
    {
        printf("Good Morning\n");

        printf("Enter a number: ");
        scanf("%d", &num);

    }
    while (num != 0);

    return 0;
}
