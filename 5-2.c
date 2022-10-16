/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
void main()
{
    char string[30];
    printf("Enter a string : ");
    gets(string);
    printf("Input string : ");
    puts(string);
    int count = 0, i;
    for (i = 0; string[i]; i++)
    {
        if (string[i] == 32)
            count++;
    }
    if (i > 0)
        count++;
    printf("Total number of words in the given string: %d.", count);
    printf("\n");
}

/*
Program Number: 5.1
*/