// LAB 9
// Create four functions named sum, differnce, multiply and divide to compute the sum, difference, muliply and division of two numbers and call those methods in the main method .

#include <stdio.h>
#include <conio.h>

int sum(int n1, int n2);
int difference(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

int main()
{
    sum(10, 20);
    difference(20, 10);
    multiply(5, 25);
    divide(27, 3);

    getch();
    return 0;
}

int sum(int n1, int n2)
{
    printf("The sum of %d and %d = %d\n", n1, n2, n1 + n2);
}
int difference(int n1, int n2)
{
    printf("The difference of %d and %d = %d\n", n1, n2, n1 - n2);
}
int multiply(int n1, int n2)
{
    printf("The multiply of %d and %d = %d\n", n1, n2, n1 * n2);
}
int divide(int n1, int n2)
{
    printf("The divide of %d and %d = %d\n", n1, n2, n1 / n2);
}

// Output:
//      The sum of 10 and 20 = 30
//      The difference of 20 and 10 = 10
//      The multiply of 5 and 25 = 125
//      The divide of 27 and 3 = 9