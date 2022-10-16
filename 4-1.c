/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int fibonacci(int);
void main()
{
    int n, i = 1, c;
    printf("Enter no of terms : ");
    scanf("%d", &n);
    printf("Fibonacci series : ");
    for (c = 0; c < n; c++)
    {
        printf("%d ", fibonacci(i));
        i++;
    }
    printf("\n");
}
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

/*
Program Number: 4.1
*/