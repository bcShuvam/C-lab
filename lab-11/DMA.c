// LAB 11
// Q3. WAP to take input of n numbers using DMA and find the sum of them.

#include <stdio.h>

void main()
{
    int i, n, sum, *ptr;

    printf("Enter the size of array you want to create : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter array element no. %d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n; i++)
        sum += *(ptr + i);

    printf("The sum of every array element = %d\n", sum);

    free(ptr);
}

// Output :
//      Enter the size of array you want to create : 3
//      Enter array element no. 1 : 5
//      Enter array element no. 2 : 10
//      Enter array element no. 3 : 15
//      The sum of every array element = 30