// LAB 13
// Q1. Create a structure named student that contains the information about the student which includes roll no, name, address and level. Create and store information about 5 students and display them.

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollNo;
    char name[25];
    char address[25];
    char level[25];
} s[5];

void main()
{
    int i;

    printf("Enter roll no. , name, address, level :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter detail of student %d\n", i + 1);
        scanf("%d %s %s %s", &s[i].rollNo, s[i].name, s[i].address, s[i].level);
    }

    printf("\nDetails of studednt are :\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d : ", i + 1);
        printf("%d %s %s %s", s[i].rollNo, s[i].name, s[i].address, s[i].level);
        printf("\n");
    }

    getch();
}

// Output :
//      Enter roll no. , name, address, level :
//      Enter detail of student 1
//      7
//      Ronaldo
//      Portugal
//      PHD
//      Enter detail of student 2
//      10
//      Messi
//      Argentina
//      PHD
//      Enter detail of student 3
//      1
//      Musk
//      USA
//      PHD
//      Enter detail of student 4
//      8
//      Ambani
//      India
//      Masters
//      Enter detail of student 5
//      1342
//      Binod
//      Nepal
//      Bachelor

//      Details of studednt are :
//      Student 1 : 7 Ronaldo Portugal PHD
//      Student 2 : 10 Messi Argentina PHD
//      Student 3 : 1 Musk USA PHD
//      Student 4 : 8 Ambani India Masters
//      Student 5 : 1342 Binod Nepal Bachelor