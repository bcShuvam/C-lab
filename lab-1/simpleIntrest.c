#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to find simple Intrest

    float principleAmt, time, rate, simpleIntrest;
    principleAmt = 100000;
    time = 2;
    rate = 12;

    simpleIntrest = (principleAmt * time * rate) / 100;
    printf("Simple intrest = %.2f", simpleIntrest);

    getch();
    return 0;
}

// Output :
//          Simple intrest = 24000.00