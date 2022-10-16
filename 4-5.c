/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int power(int n1, int n2);
void main()
{
    int base, a, result;
    printf("Enter base number : ");
    scanf("%d", &base);
    printf("Enter power number : ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d=%d\n", base, a, result);
}
int power(int base, int a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

/*
Program Number: 4.5
*/