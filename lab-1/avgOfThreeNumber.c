#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to compute average of three number(take number 6,4,3)

    int num1, num2, num3;
    float avg;

    num1 = 6;
    num2 = 4;
    num3 = 3;

    avg = (num1 + num2 + num3) / 3.0;
    printf("The average of %d, %d and %d is %.2f", num1, num2, num3, avg);

    getch();
    return 0;
}

// Output :
//          The average of 6,4 and 3 is 4.33