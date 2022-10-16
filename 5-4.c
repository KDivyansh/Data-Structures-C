/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char string[30];
    int i, alphabets = 0, digits = 0, special = 0;
    printf("Enter a string : ");
    gets(string);
    for (i = 0; string[i]; i++)
    {
        if ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
            alphabets++;
        else if (string[i] >= 48 && string[i] <= 57)
            digits++;
        else
            special++;
    }
    printf("Total Alphabets : %d\n", alphabets);
    printf("Total Digits : %d\n", digits);
    printf("Special characters : %d", special);
    printf("\n");
}

/*
Program Number: 5.1
*/