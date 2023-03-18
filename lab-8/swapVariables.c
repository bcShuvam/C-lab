// LAB 8
// Q1. WAP to swap the values of two variables.

// Source Code:

#include <stdio.h>

void main()
{
    int firstNum, secondNum, temp;
    firstNum = 10;
    secondNum = 20;

    printf("Before swaping :\n");
    printf("First Number = %d\n", firstNum);
    printf("Second Number = %d\n\n", secondNum);

    temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;

    printf("After swaping :\n");
    printf("First Number = %d\n", firstNum);
    printf("Second Number = %d\n", secondNum);
}

// Output :
//      Before swaping :
//      First Number = 10
//      Second Number = 20

//      After swaping :
//      First Number = 20
//      Second Number = 10