// Q3. How will you define pointer? Write a program that illustrate how pointer variable change the value of normal variable . [2 + 3]

// -> A pointer is a variable that stores the memory address of another variable as its value. A pointer variable points to a data type (like int ) of the same type, and is created with the * operator.

// Program
#include <stdio.h>

void main()
{
    int age, *pAge = NULL;

    age = 18;
    pAge = &age;
    *pAge = 20;

    printf("%d", age);
}