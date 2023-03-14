#include <stdio.h>
#include <conio.h>

int main()
{
    // WAP to swap the values of two variables

    int one = 1;
    int two = 2;
    int temp;

    // Swaping values
    temp = one; // Storing one in temp i.e temp = 1
    one = two;  // Storing two in one i.e one = 2
    two = temp; // Storing temp in two i.e two = 1

    // Displaying the value of one and two variables
    printf("One = %d\n", one);
    printf("Two = %d", two);
}