// Q5. Write a C program to calculate following expressions: 5x√(y^2+5)

#include <stdio.h>
#include <math.h>

void main()
{
    int x, y;
    float computeExp;
    x = 5;
    y = 3;

    computeExp = 5 * x * (sqrt(pow(y, 2) + 5));

    printf("%.2f", computeExp);
}