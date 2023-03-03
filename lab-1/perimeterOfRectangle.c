#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to find the area and perimeter of rectangle

    int length, breath, areaOfRect, perimeterOfRect;
    length = 5;
    breath = 3;

    areaOfRect = length * breath;
    perimeterOfRect = 2 * (length + breath);

    printf("Area of rectangle = %d\n", areaOfRect);
    printf("Perimeter of rectangle = %d", perimeterOfRect);

    getch();
    return 0;
}

// Output :
//          Area of rectangle = 15
//          Perimeter of rectangle = 16