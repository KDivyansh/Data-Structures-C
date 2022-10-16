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
    int i, numbers[n], evencount = 0, oddcount = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0)
        {
            evencount = evencount + 1;
        }
        else
        {
            oddcount = oddcount + 1;
        }
    }
    printf("Entered Values : ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    int even[evencount], odd[oddcount];
    evencount = 0;
    oddcount = 0;
    for (i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even[evencount] = numbers[i];
            evencount = evencount + 1;
        }
        else
        {
            odd[oddcount] = numbers[i];
            oddcount = oddcount + 1;
        }
    }
    printf("\nOdd Values : ");
    for (i = 0; i < oddcount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\nEven Values : ");
    for (i = 0; i < evencount; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
}

/*
Program Number: 2.3
*/