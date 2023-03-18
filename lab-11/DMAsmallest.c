// LAB 11
// Q4. WAP to input n numbers using DMA and find the smallest element from them.

#include <stdio.h>

void main()
{
    int i, n, min, *ptr;

    printf("Enter the size of array you want to create : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter array element no. %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    min = ptr[0];

    for (i = 0; i < n; i++)
    {
        if (min > ptr[i])
            min = ptr[i];
    }

    printf("The smallest element in array is %d\n", min);

    free(ptr);
}

// Output :
//      Enter the size of array you want to create : 4
//      Enter array element no. 1 : 8
//      Enter array element no. 2 : 17
//      Enter array element no. 3 : 5
//      Enter array element no. 4 : 16
//      The smallest array element is 5
