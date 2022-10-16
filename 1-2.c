/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void odd_even(int n)
{
    if (n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    odd_even(n);
}

/*
Program Number: 1.2
*/
