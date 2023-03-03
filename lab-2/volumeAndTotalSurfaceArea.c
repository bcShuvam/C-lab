#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to input lenght,breath and height. Find the volume and it's Total Surface Area

    int length, breath, height, volume, totalSurfaceArea;

    printf("Enter lenght : ");
    scanf("%d", &length);

    printf("Enter breath : ");
    scanf("%d", &breath);

    printf("Enter height : ");
    scanf("%d", &height);

    volume = length * breath * height;
    totalSurfaceArea = 2 * (length * breath + breath * height + length * height);

    printf("The volume = %d\n", volume);
    printf("The Total Surface Area = %d\n", totalSurfaceArea);

    getch();
    return 0;
}

// Output :
//          Enter lenght : 10
//          Enter lenght : 4
//          Enter lenght : 6
//          The volume = 240
//          The Total Surface Area = 248