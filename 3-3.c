/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void main()
{
    int num1, num2, *ptr1, *ptr2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Old Values : Num1 = %d, Num2 = %d.\n", num1, num2);
    ptr1 = &num1;
    ptr2 = &num2;
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("New Values : Num1 = %d, Num2 = %d.", *ptr1, *ptr2);
    printf("\n");
}

/*
Program Number: 3.3
*/