/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char string1[30], string2[30];
    printf("Enter string 1 : ");
    gets(string1);
    printf("Enter string 2 : ");
    gets(string2);
    printf("String 1 : ");
    puts(string1);
    printf("String 2 : ");
    puts(string2);
    int i, flag = 0;
    if (strlen(string1) != strlen(string2))
        flag = 1;
    for (i = 0; string1[i] && string2[i]; i++)
    {
        if (string1[i] != string2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Strings are same.");
    else
        printf("Strings are not same.");
    printf("\n");
}

/*
Program Number: 5.1
*/