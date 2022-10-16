/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
long int factor(int n);
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld.\n", n, factor(n));
}
long int factor(int n)
{
    if (n >= 1)
        return n * factor(n - 1);
    else
        return 1;
}

/*
Program Number: 4.4
*/