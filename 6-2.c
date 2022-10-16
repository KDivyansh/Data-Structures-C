/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
union library
{
    int accessno;
    char title[20];
    char author[20];
    int price;
    int flag;
};
void main()
{
    union library book;
    printf("Input access no : ");
    scanf("%d", &book.accessno);
    printf("Accession no : %d", book.accessno);
    printf("\nEnter title of the book : ");
    scanf("%s", &book.title);
    printf("Title : %s\n", book.title);

    printf("Enter name of the author : ");
    scanf("%s", &book.author);
    printf("Author : %s", book.author);

    printf("\nEnter price of the book : ");
    scanf("%d", &book.price);
    printf("Price : Rs. %d\n", book.price);
    printf("Is the book issued, '1' for yes or '0' for no : ");
    scanf("%d", &book.flag);
    printf("Book Issued : %d\n", book.flag);
}

/*
Program Number: 6.2
*/