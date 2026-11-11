// C Program to Calculate the Area of a Rectangle

#include <stdio.h>

int main()
{
    float length, breadth, area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Area = %.2f", area);

    return 0;
}

// output :Enter length: 10
// Enter breadth: 5
// Area = 50.00
