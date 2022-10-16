/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping are:  %d %d\n", a, b);
    swap(&a, &b);
    printf("After swapping are:  %d %d\n", a, b);
}


/*
Program Number: 1.4
*/
