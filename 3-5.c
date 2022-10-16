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
    int i, numbers[n], *ptr[n], j, sum = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &numbers[i]);
        ptr[i] = &numbers[i];
    }
    printf("Entered Values : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr[i]);
        sum = sum + *ptr[i];
    }
    printf("\nThe sum of all the numbers is %d.", sum);
    printf("\n");
}

/*
Program Number: 3.5
*/