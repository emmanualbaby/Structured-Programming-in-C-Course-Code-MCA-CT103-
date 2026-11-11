// C Program to Print Name, Address, Gender and Age Using Different Input/Output Functions

#include <stdio.h>

int main()
{
    char name[50], address[100], gender;
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your address: ");
    getchar();
    fgets(address);

    printf("Enter your gender: ");
    gender = getchar();

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n--- Personal Details ---\n");

    printf("Name: ");
    puts(name);

    printf("Address: ");
    puts(address);

    printf("Gender: ");
    putchar(gender);

    printf("\nAge: %d", age);

    return 0;
}
