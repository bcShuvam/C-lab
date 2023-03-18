// LAB 8
// Q3. Implement sequential searching to search a data item from a list of data.

#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[6] = {8, 7, 5, 17, 10, 16};
    int i, num, found = 0;

    printf("Enter a number to check if it exist in array or not : ");
    scanf("%d", &num);

    for (i = 0; i < 6; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }
        else
            found = 0;
    }

    if (found == 1)
        printf("%d exists in the array", num);
    else
        printf("%d dosen't exist in the array", num);

    getch();
    return 0;
}

// Output :
//      Enter a number to check if it exist in array or not : 5
//      5 exists in the array