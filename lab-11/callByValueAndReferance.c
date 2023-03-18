// LAB 11
// Q1. Demonstrate the functions calling to swap the value of variables using the pass by value and pass by reference.

#include <stdio.h>

int swap_byRef(int *x, int *y);
int swap_byVal(int x, int y);

void main()
{
    int a = 1, b = 2;
    printf("Before swaping:\n");
    printf("a = %d, b = %d\n\n", a, b);

    swap_byRef(&a, &b);
    printf("Pass by referance swaping:\n");
    printf("a = %d, b = %d\n\n", a, b);

    printf("Pass by value swaping:\n");
    swap_byVal(a, b);
}
int swap_byRef(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int swap_byVal(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("a = %d, b = %d\n\n", x, y);
}

// Output :
//      Before swaping:
//      a = 1, b = 2

//      Pass by referance swaping:
//      a = 2, b = 1

//      Pass by value swaping:
//      a = 1, b = 2