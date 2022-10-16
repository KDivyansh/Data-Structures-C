/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void swap(int num1, int num2);
void main()
{
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    swap(num1, num2);
}

void swap(int num1, int num2)
{
    int temp;
    printf("Initial : num1 = %d, num2 = %d.\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swap : num1 = %d, num2 = %d.\n", num1, num2);
}

/*
Program Number: 1.5
*/
