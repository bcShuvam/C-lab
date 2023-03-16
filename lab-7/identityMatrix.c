// LAB 7
// Q1. WAP to display an identity matrix of size 4 * 4

#include <stdio.h>

void main()
{
    int i, j, arr[4][4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d  ", arr[i][j]);
        printf("\n");
    }
}

// Output :
//      1  0  0  0
//      0  1  0  0
//      0  0  1  0
//      0  0  0  1