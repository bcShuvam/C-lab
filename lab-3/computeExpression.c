#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    // WAP to input an intefer value and compute ✓x^5+x^2+1

    int x;
    float compute;

    printf("Enter value of x : ");
    scanf("%d", &x);

    compute = sqrt(pow(x, 5) + pow(x, 2) + 1);

    printf("Value of x after computation = %.2f", compute);

    getch();
    return 0;
}

// Output :
//          Enter the value of x : 5
//          Value of x after computation = 56.13