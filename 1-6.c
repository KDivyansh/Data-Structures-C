/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int decimalToBinary(int n)
{
    int binary = 0;
    int remainder;
    int i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

void main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in binary is %d", n, decimalToBinary(n));
}

/*
Program Number: 1.6
*/
