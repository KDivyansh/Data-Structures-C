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
    int i, numbers[n], j;
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
    int maximum, flag, temp;
    for (i = 0; i < n; i++)
    {
        maximum = numbers[0];
        flag = 0;
        for (j = 0; j < n - i; j++)
        {
            if (numbers[j] > maximum)
            {
                maximum = numbers[j];
                flag = j;
            }
        }
        temp = numbers[n - i - 1];
        numbers[n - i - 1] = maximum;
        numbers[flag] = temp;
    }
    printf("\nThe second largest element in array is %d.", numbers[n - 2]);
    printf("\n");
}

/*
Program Number: 2.6
*/