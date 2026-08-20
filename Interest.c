#include <stdio.h>
int main()
{
    float p;                                  // Here p means Principal amount
    printf("\nEnter the value of p:");
    scanf("%f", &p);
    printf("\np is %f", p);

    float n;                                 // Here n means Number of years
    printf("\nEnter the value of n:");
    scanf("%f", &n);
    printf("\nn is %f", n);

    float r;                                // Here r means Rate of interest
    printf("\nEnter the value of r:");
    scanf("%f", &r);
    printf("\nr is %f", r);
    
    float interest;
    interest= p*n*r/100;
    printf("\nInterest is %f", interest);

    return 0;
}