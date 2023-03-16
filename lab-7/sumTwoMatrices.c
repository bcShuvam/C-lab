// LAB 7
// Q2. WAP to find the sum of two matrices

#include <stdio.h>

void main()
{
    int i, j, sumArr[3][3];
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{11, 22, 33}, {44, 55, 66}, {77, 88, 99}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            sumArr[i][j] = arr1[i][j] + arr2[i][j];
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d  ", sumArr[i][j]);
        printf("\n");
    }
}

// Output :
//      12  24  36
//      48  60  72
//      84  96  108