// Q10. Is break keyword mandatory in switch statement ? Write a program to calculate the basic arithmetic operations(+,-,*,/) using switch case statement.[2+8]

// Yes, break keyword is mandatory in switch statement because in switch statement, every condition/case is iterated unless the condition is true and gets out of the siwtch case block after it reads break statement. If we don't use break statement after every switch case condition then although if one of the condition gets true, it will continue checking the condition and prints the default statement.

// Program

#include <stdio.h>

void main()
{
    int num1, num2;
    float result;
    char op, raw;

    printf("Enter first number : ");
    scanf("%d", &num1);

    scanf("%c", &raw);
    printf("Enter Arithmatic operation [+, -, *, /] : ");
    scanf("%c", &op);
    scanf("%c", &raw);

    printf("Enter first number : ");
    scanf("%d", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %.0f", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result = %.0f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result = %.0f", result);
        break;
    case '/':
        result = (float)num1 / (float)num2;
        printf("Result = %.2f", result);
        break;

    default:
        printf("Wrong input!!");
        break;
    }
}