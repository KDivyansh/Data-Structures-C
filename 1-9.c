/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void perfect(int start, int end);
void main()
{
    int start, end;
    printf("Enter start of the range : ");
    scanf("%d", &start);
    printf("Enter end of the range : ");
    scanf("%d", &end);
    perfect(start, end);
}
void perfect(int start, int end)
{
    int i, j, sum;
    printf("Perfect numbers are : ");
    for (i = start; i <= end; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/*
Program Number: 1.9
*/