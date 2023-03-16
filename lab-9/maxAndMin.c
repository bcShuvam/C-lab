// LAB 9
// Create two functions in which first finds the maximum and second one finds the minimum number in an array and call these methods in main method.

#include <stdio.h>
#include <conio.h>

int maximum(int arr[], int size);
int minimum(int arr[], int size);

int main()
{
    int arr[] = {8, 5, 17, 16, 10, 7};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    maximum(arr, sizeArr);
    minimum(arr, sizeArr);

    getch();
    return 0;
}

int maximum(int arr[], int size)
{
    int i, max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("The maximum number is %d\n", max);
}
int minimum(int arr[], int size)
{
    int i, min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("The minimum number is %d\n", min);
}

// Output :
//      The maximum number is 17
//      The minimum number is 5