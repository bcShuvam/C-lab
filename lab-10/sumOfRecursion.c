// LAB 10
// Q1. Find the sum of first 10 natural numbers using recursion.

#include <stdio.h>
#include <conio.h>

int sum(int n);

int main()
{
    int sumTotal, num = 10;

    sumTotal = sum(num);
    printf("The sum of first 10 natural number is %d\n", sumTotal);

    getch();
    return 0;
}

int sum(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n + sum(n - 1);
}

// Output :
//      The sum of first 10 natural number is 55