// Q4. Write a C program to calculate sum of the natural number up yo N number using recursive function. [5]

#include <stdio.h>

int sumRecursion(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n + sumRecursion(n - 1);
}

void main()
{
    int num = 10, result;
    result = sumRecursion(num);
    printf("The sum first %d natural number = %d", num, result);
}