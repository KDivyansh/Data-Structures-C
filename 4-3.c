/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int gcd(int n1, int n2);
void main()
{
    int n1, n2;
    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);
    printf("G.C.D of %d and %d is %d.\n", n1, n2, gcd(n1, n2));
}
int gcd(int n1, int n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

/*
Program Number: 4.3
*/