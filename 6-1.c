/*
Roll Nuber: 21124054
author: Divyansh Katare
*/

#include <stdio.h>
struct detail
{
    char name[20];
    char author[20];
    int pages;
    float price;
};
void main()
{
    struct detail book;
    printf("Enter name of the book : ");
    gets(book.name);
    printf("Enter name of the author : ");
    gets(book.author);
    printf("Enter no of pages : ");
    scanf("%d", &book.pages);
    printf("Enter price of the book : ");
    scanf("%f", &book.price);
    printf("\nThe book details are as follows :\n");
    printf("Name : ");
    puts(book.name);
    printf("Author : ");
    puts(book.author);
    printf("Pages : %d\n", book.pages);
    printf("Price : Rs. %.2f\n", book.price);
}
/*
Program Number: 6.1
*/