// C Program to Find the Length of a String 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("Length of the string = %d", len);

    return 0;
}
