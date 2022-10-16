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
    printf("Original : ");
    puts(string);
    int i;
    char dup[strlen(string) + 1];
    for (i = 0; i < strlen(string); i++)
    {
        dup[i] = string[i];
    }
    dup[i] = '\0';
    printf("Copied : ");
    puts(dup);
}

/*
Program Number: 5.1
*/