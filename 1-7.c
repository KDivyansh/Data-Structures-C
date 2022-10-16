/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int armstrongcheck(int number);
int perfectcheck(int number);
void main()
{
    int number, armstrong, perfect;
    printf("Enter a number : ");
    scanf("%d", &number);
    armstrong = armstrongcheck(number);
    perfect = perfectcheck(number);
    if (armstrong == 1)
        printf("%d is an armstrong number.\n", number);
    else
        printf("%d is not an armstrong number.\n", number);
    if (perfect == 1)
        printf("%d is a perfect number.\n", number);
    else
        printf("%d is not a perfect number.\n", number);
}
int armstrongcheck(int number)
{
    int length = 0, temp = number;
// determine number of digits
    while (temp != 0)
    {
        temp = temp / 10;
        length = length + 1;
    }
    temp = number;
    int digits[8], i, j;
// separate the digits
    for (i = 0; temp != 0; i++)
    {
        digits[i] = temp % 10;
        temp = temp / 10;
    }
    int new[length], sum = 0, temp1;
// the powered summation
    for (i = 0; i < length; i++)
    {
        new[i] = digits[i];
        temp1 = new[i];
        for (j = 1; j < length; j++)
        {
            new[i] = new[i] * temp1;
        }
        sum = sum + new[i];
    }
// check for perfect number
    if (sum == number)
        return 1;
    else
        return 0;
}
int perfectcheck(int number)
{
    int temp = number, sum = 0, i;
    for (i = 1; i < temp; i++)
    {
        if (temp % i == 0)
            sum = sum + i;
    }
    if (sum == number)
        return 1;
    else
        return 0;
}

/*
Program Number: 1.7
*/