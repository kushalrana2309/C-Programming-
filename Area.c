#include <stdio.h>
int main()
{
    int length;
    printf("\nEnter the value of length:");
    scanf("%d", &length);
    printf("\nLength is %d", length);

    int area;
    area= length*length;
    printf("\nArea of square is %d", area);

    int width;
    printf("\nEnter the value of width:");
    scanf("%d", &width);
    printf("\nWidth is %d", width);

    int area1;
    area1= length*width;
    printf("\nArea of rectangle is %d", area1);

    float base;
    float hight;
    printf("\nEnter the value of base:");
    scanf("%f", &base);
    printf("\nBase is %f", base);
    printf("\nEnter the value of hight");
    scanf("%f", &hight);
    printf("\nHight is %f", hight);

    float area2;
    area2= 0.5*base*hight;
    printf("\nArea of triangle is %f", area2);

    float r;
    float pi= 3.14;
    printf("\nEnter the value of r:");
    scanf("%f", &r);
    printf("\nr is %f", r);
    
    float area3;
    area3= 2*pi*r;
    printf("\nArea of circle is %f", area3);

    return 0;
}
