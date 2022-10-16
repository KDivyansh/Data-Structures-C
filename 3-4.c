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
    int i, numbers[n], *ptr[n], j;
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
    }
    int maximum, flag, temp;
    for (i = 0; i < n; i++)
    {
        maximum = *ptr[0];
        flag = 0;
        for (j = 0; j < n - i; j++)
        {
            if (*ptr[j] > maximum)
            {
                maximum = *ptr[j];
                flag = j;
            }
        }
        temp = *ptr[n - i - 1];
        *ptr[n - i - 1] = maximum;
        *ptr[flag] = temp;
    }
    printf("\nSorted Values : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
}

/*
Program Number: 3.4
*/