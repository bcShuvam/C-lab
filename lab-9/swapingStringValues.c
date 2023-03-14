#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // WAP to swap the values of two variables

    char first[15] = "First";
    char second[15] = "Second";
    char temp[15];

    // Swaping values
    // strcpy is a built in function made for copying string from one variable to another variable
    // Note : must include string.h header file to use strcpy function

    strcpy(temp, first);   // copying value of first variale in temp variable i.e temp = "First"
    strcpy(first, second); // copying value of second variale in first variable i.e first = "Second"
    strcpy(second, temp);  // copying value of temp variale in first variable i.e second = "First"

    // Displaying the value of first and second variables
    printf("first = %s\n", first);
    printf("second = %s", second);

    getch();
    return 0;
}