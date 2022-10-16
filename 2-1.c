/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void main()
{
    int n;
    printf("Total number of values you would like to enter : ");
    scanf("%d", &n);
    int i, numbers[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Entered Values : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\nReversed Values : ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

/*
Program Number: 2.1
*/