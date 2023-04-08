// Q2. Write a C program to generate the following output using loop.[5]
/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/

#include <stdio.h>

void main()
{
    int i, j, k;

    ///////////////////////////// Loop 1 /////////////////////////////
    /*
    1 0 1 0 1
      0 1 0 1
        1 0 1
          0 1
            1
    */
    for (i = 1; i <= 5; i++) // row
    {
        for (j = 1; j < i; j++) // space
            printf("  ");

        for (k = i; k <= 5; k++) // 1's and 0's
        {
            if (k % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    printf("\n\n");

    ///////////////////////////// Loop 2 /////////////////////////////
    /*
            1
          0 1
        1 0 1
      0 1 0 1
    1 0 1 0 1
    */
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
            printf("  ");

        for (k = 1; k <= i; k++)
        {
            if (k % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    printf("\n\n");

    ///////////////////////////// Loop 3 /////////////////////////////
    /*
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1
    */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    printf("\n\n");

    ///////////////////////////// Loop 4 /////////////////////////////
    /*
    1 0 1 0 1
    1 0 1 0
    1 0 1
    1 0
    1
    */
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}