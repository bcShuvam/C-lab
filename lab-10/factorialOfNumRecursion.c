// LAB 10
// Q2. Compute the factorial of a number using recurion.

#include <stdio.h>
#include <conio.h>

int factorial(int n);

int main()
{
    int factOfNum, num = 6;

    factOfNum = factorial(num);
    printf("The factorial of %d = %d\n", num, factOfNum);

    getch();
    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Output :
//      The factorial of 6 = 720