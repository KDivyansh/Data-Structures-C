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
    int new[n], count = 0, j, flag, dupcount = 0;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < count; j++)
        {
            if (numbers[i] == new[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            new[count] = numbers[i];
            count = count + 1;
        }
    }
    printf("\nNo of individual elements are %d.", count);
    int flagcount[count];
    for (i = 0; i < count; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (new[i] == numbers[j])
            {
                flag = flag + 1;
            }
        }
        flagcount[i] = flag;
    }
    printf("\nNo of occurrences for each element :");
    for (i = 0; i < count; i++)
    {
        printf("\n%d : %d", new[i], flagcount[i]);
    }
    printf("\n");
}

/*
Program Number: 2.4
*/