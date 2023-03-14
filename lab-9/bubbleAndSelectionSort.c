#include <stdio.h>
#include <conio.h>

int isSorted;

void bubbleSort(int array[], int size);
void selectionSort(int array[], int size);
void printArray(int array[], int size);

int main()
{
    int arr[] = {8, 17, 59, 619, 5, 58, 16};
    // int arr[] = {1, 2, 3, 4, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);

    getch();
    return 0;
}

void bubbleSort(int array[], int size)
{
    int i, j, pass;
    for (i = 0; i < size; i++)
    {
        isSorted = 1;
        for (j = 0; j < size - i - 1; j++) // For number of pass
        {
            if (array[j] > array[j + 1]) // For comparision in each pass
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                isSorted = 0;
                pass = i;
            }
        }
        if (isSorted)
        {
            break;
        }
    }
}

void selectionSort(int array[], int size)
{
    int i, j, temp, indexOfMin;
    for (i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (j = i + 1; j < size - i - 1; j++)
        {
            if (array[j] < array[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap array[i] and array[indexOfMin]
        temp = array[i];
        array[i] = array[indexOfMin];
        array[indexOfMin] = temp;
    }
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}