// C Program to Check Whether Two Strings Are Alphabetically Equal or Not

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = strcmp(str1, str2);

    if(result == 0)
    {
        printf("Strings are alphabetically equal");
    }
    else if(result < 0)
    {
        printf("First string comes before second string");
    }
    else
    {
        printf("First string comes after second string");
    }

    return 0;
}
