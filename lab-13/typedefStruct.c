// LAB 13
// Q2.Create a datatype structure book that contains the information about books including isbn number, title, genre and price. Create and store information about 3 books and display them.

#include <stdio.h>
#include <conio.h>

typedef struct
{
    int isbnNumber;
    char title[50];
    char genre[25];
    float price;
} book;

void main()
{
    book b1 = {101, "Munamadan", "romance novel", 400};
    book b2 = {202, "Gravity", "science friction", 800};
    book b3 = {303, "Avengers", "action friction", 1600};

    printf("Details of books are:\n");
    printf("%d, %s, %s, %.2f\n", b1.isbnNumber, b1.title, b1.genre, b1.price);
    printf("%d, %s, %s, %.2f\n", b2.isbnNumber, b2.title, b2.genre, b2.price);
    printf("%d, %s, %s, %.2f\n", b3.isbnNumber, b3.title, b3.genre, b3.price);

    getch();
}

// Output :
//      Details of books are:
//      101, Munamadan romance, novel, 400.00
//      202, Gravity, science friction, 800.00
//      303, Avengers, action friction, 1600.00