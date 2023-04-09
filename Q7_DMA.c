// Q7. Why do you use DMA instead of array? Explain DMA with suitable example. [2 + 3]

// -> Dynamic memory allocation(DMA) is used to allocate the size/length of an array of same datatype like(int) during runtime according to user input .

// Program

#include <stdio.h>

void main()
{
    int n, i, *pArr;

    printf("Enter size of array you want : ");
    scanf("%d", &n);

    pArr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
        pArr[i] = i * i; // storing square of i as dummy data in the array

    for (i = 0; i < n; i++)
        printf("%d ", pArr[i]); // printing array to the console
}