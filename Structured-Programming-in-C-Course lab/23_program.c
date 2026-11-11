// C Program to Display "Good Morning" 5 Times Repeatedly Based on User's Interest

#include <stdio.h>

int main()
{
    int i;
    char choice;

    do
    {
        for (i = 1; i <= 5; i++)
        {
            printf("Good Morning\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y' || choice == 'Y');

    return 0;
}
