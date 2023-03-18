// LAB 11
// Q2. Create an array and display the values of the array elements using pointers.

#include <stdio.h>

void main()
{
    int arr[6] = {5, 7, 17, 8, 16, 10};
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("%d ", *(arr + i));
    }
}

// Output :
//      5 7 17 18 16 10