// Create a union date that contains year, day and month.Create any three date and display them.

#include <stdio.h>
#include <conio.h>

struct date
{
    int year;
    int day;
    int month;
} d;

void main()
{
    d.year = 2079;
    d.day = 28;
    d.month = 12;

    printf("Exam date of C Programming is %d/%d/%d", d.year, d.month, d.day);

    getch();
}

// Output :
//      Exam date of C Programming is 2079/12/28