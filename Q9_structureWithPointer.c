// Q9. Write a C program to store the player name, runs socred, wickets taken of 20 cricketers using structure along with pointer then arrange in order of maximum wickets to minimum wickets they had taken.

#include <stdio.h>
#include <string.h>

int maxPlayer = 3;

struct cricketers
{
    char playerName[30];
    int runsScored;
    int wicketTaken;
} c[3]; // if you change value of maxPlayer then please change value of c[3] too.

void main()
{
    int i, j, *pArrWickets, temp;
    pArrWickets = (int *)malloc(maxPlayer * sizeof(int));

    for (i = 0; i < maxPlayer; i++)
    {
        printf("Enter player1 Name, Runs scored and Wicket taken :\n");
        scanf("%s %d %d", c[i].playerName, &c[i].runsScored, &c[i].wicketTaken);
        pArrWickets[i] = c[i].wicketTaken;
    }
    printf("\n");

    printf("Before sorting : ");
    for (i = 0; i < maxPlayer; i++)
        printf("%d ", *(pArrWickets + i));

    printf("\n");

    for (i = 0; i < maxPlayer; i++)
    {
        for (j = 0; j < maxPlayer - i - 1; j++)
        {
            if (pArrWickets[j] < pArrWickets[j + 1])
            {
                temp = pArrWickets[j];
                pArrWickets[j] = pArrWickets[j + 1];
                pArrWickets[j + 1] = temp;
            }
        }
    }
    printf("\n");

    printf("After sorting : ");
    for (i = 0; i < maxPlayer; i++)
        printf("%d ", *(pArrWickets + i));
}