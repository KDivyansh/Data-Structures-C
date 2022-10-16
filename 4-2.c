/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int digits(int n1);
int ctr = 0, *ptr = &ctr;
void main()
{
    int n1, ctr = 0;
    printf("Input a number : ");
    scanf("%d", &n1);
    digits(n1);
    printf("The number of digits in the number is : %d \n", *ptr);
}
int digits(int n1)
{
    if (n1 != 0)
    {
        *ptr = *ptr + 1;
        digits(n1 / 10);
    }
}

/*
Program Number: 4.2
*/