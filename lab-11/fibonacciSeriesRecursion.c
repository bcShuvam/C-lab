// LAB 11
// Q3. Display the first 10 fibonacci series using recursion.

#include <stdio.h>
#include <conio.h>

int fib_recursive(int n);

int main()
{
    int number = 10;

    printf("The first 10 fibonacci series = %d\n", fib_recursive(number));

    getch();
    return 0;
}

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

// Output :
//      The first 10 fibonacci series = 34