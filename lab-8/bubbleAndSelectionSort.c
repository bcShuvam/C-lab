// LAB 8
// Q2. WAP to sort a list of numbers using bubble sort and selection sort.

// Source code :

#include <stdio.h>

void printArray(int array[], int size);

void main()
{
    int i, j, size, temp, isSorted, indexOfMin;
    int arrNum[] = {8, 5, 17, 16, 10, 7};
    size = sizeof(arrNum) / sizeof(arrNum[0]);

    printf("Bubble Sort:\n");
    for (i = 0; i < size; i++)
    {
        isSorted = 1;
        for (j = 0; j < size - i - 1; j++)
        {
            if (arrNum[j] > arrNum[j + 1])
            {
                temp = arrNum[j];
                arrNum[j] = arrNum[j + 1];
                arrNum[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
            break;
    }
    printArray(arrNum, size);

    printf("Selection Sort:\n");
    for (i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (j = i + 1; j < size; j++)
        {
            if (arrNum[j] < arrNum[indexOfMin])
                indexOfMin = j;
        }
        temp = arrNum[i];
        arrNum[i] = arrNum[indexOfMin];
        arrNum[indexOfMin] = temp;
    }
    printArray(arrNum, size);
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n\n");
}

// Output :
//      Bubble Sort:
//      5 7 8 10 16 17

//      Selection Sort:
//      5 7 8 10 16 17