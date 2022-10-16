/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void main()
{
    int numbers[5], i, *ptr[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &numbers[i]);
        ptr[i] = &numbers[i];
    }
    printf("The input numbers are : ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr[i]);
    }
    printf("\n");
}

/*
Program Number: 3.2
*/