/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char string[30];
    printf("Enter a string : ");
    gets(string);
    printf("Input string : ");
    puts(string);
    printf("Reverse : ");
    int i = 0;
    for (i = strlen(string) - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

/*
Program Number: 5.1
*/