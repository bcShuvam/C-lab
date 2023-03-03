#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to convert fahrenheit to celsius. (Formula : c = 5/9 * (F - 32))

    float tempInFahrenheit, fahrenheitToCelsius;
    tempInFahrenheit = 98;

    fahrenheitToCelsius = 5.0 / 9.0 * (tempInFahrenheit - 32);

    printf("%.2fF = %.2fC", tempInFahrenheit, fahrenheitToCelsius);

    getch();
    return 0;
}

// Output :
//          98F = 36.67C