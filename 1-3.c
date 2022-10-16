/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number\n", n);
            return;
        }
    }
    printf("%d is a prime number\n", n);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPrime(n);
}

/*
Program Number: 1.3
*/
