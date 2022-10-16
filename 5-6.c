/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char string[30];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string : ");
    gets(string);
    for (i = 0; string[i]; i++)
    {
        if ((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122))
        {
            if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
}

/*
Program Number: 5.1
*/