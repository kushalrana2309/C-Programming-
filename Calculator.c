#include <stdio.h>
int main()
{
    int a,b;
    printf("\nEnter a:");
    scanf("%d", &a);
    printf("\na is %d", a);
    printf("\nEnter b:");
    scanf("%d", &b);
    printf("\nb is %d", b);

    int addition;
    addition= a+b;
    printf("\nAddition is %d", addition);

    int substraction;
    substraction= a-b;
    printf("\nSubstraction is %d", substraction);

    int multiplication;
    multiplication= a*b;
    printf("\nMultiplication is %d", multiplication);

    int division;
    division= a/b;
    printf("\nDivision is %d", division);

    return 0;
}