#include <stdio.h>
int main()
{
    int C;                                // Here C means Celsius 
    printf("\nEnter the value of C:");
    scanf("%d", &C);
    printf("\nC is %d", C);

    float F;                             // Here F means Fahrenheit
    F= 1.8*C+32;   
    printf("\nFahrenheit is %f", F);

    return 0;
}