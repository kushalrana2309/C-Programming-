#include <stdio.h>
int main()
{
    
    int age;1
    printf("Please enter your age\n");
    scanf("%d", &age);
    printf(" Your age is %d\n", age);
    int num1;
    printf("Enter a number\n");
    scanf("%d", &num1);
    printf("Number 1 is %d\n", num1);

    int num2;
    printf("Enter a number\n");
    scanf("%d", &num2);
    printf("Number 2 is %d\n", num2);
    
    int sum;
    sum = num1 + num2;
    printf("Sum is %d\n", sum);
    
    int difference;
    difference = num1 - num2;
    printf("Diffrence is %d\n", difference);

    int length;
    printf("Enter a length\n");
    scanf("%d", &length);
    printf("Length is %d\n", length);

    int width;
    printf("Enter a width\n");
    scanf("%d", &width);
    printf("Width is %d\n", width);
    
    int area;
    area = length*width;
    printf("Area is %d\n", area);
 
    return 0;

}
