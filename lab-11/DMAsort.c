// LAB 11
// Q4. WAP to input n numbers using DMA and sort the elements.

#include <stdio.h>

void main()
{
    int i, j, n, temp, *ptr;

    printf("Enter the size of array you want to create : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter array element no. %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    printf("\nArray after sorting :\n");
    for (i = 0; i < n; i++)
        printf("%d  ", ptr[i]);

    free(ptr);
}

// Output :
//      Enter the size of array you want to create : 4
//      Enter array element no. 1 : 16
//      Enter array element no. 2 : 8
//      Enter array element no. 3 : 17
//      Enter array element no. 4 : 5

//      After sorting array :
//      5  8  16  17