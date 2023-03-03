#include <stdio.h>
#include <conio.h>

int main()
{
    char fullName[50];

    printf("Enter your full name : ");
    gets(fullName);

    printf("Your full name is ");
    puts(fullName);

    getch();
    return 0;
}

// Output :
//          Enter your full name : John Cena
//          Your full name is John Cena