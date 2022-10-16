/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int largest(int numbers[5]);
void main()
{
    int numbers[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }
    int maximum = largest(numbers);
    printf("Maximum number is %d. \n", maximum);
}
int largest(int numbers[5])
{
    int maximum = numbers[0], i;
    for (i = 1; i < 5; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }
    return maximum;
}

/*
Program Number: 1.8
*/
