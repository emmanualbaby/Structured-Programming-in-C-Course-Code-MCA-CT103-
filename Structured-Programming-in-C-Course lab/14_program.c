// C Program to Display the Grade of a Student Based on the Average of Three Marks


#include <stdio.h>

int main()
{
    int m1, m2, m3;
    float average;

    printf("Enter three marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3.0;

    printf("Average = %.2f\n", average);

    if (average >= 90)
    {
        printf("Grade = A");
    }
    else if (average >= 80)
    {
        printf("Grade = B");
    }
    else if (average >= 70)
    {
        printf("Grade = C");
    }
    else if (average >= 50)
    {
        printf("Grade = D");
    }
    else
    {
        printf("Grade = Fail");
    }

    return 0;
}
