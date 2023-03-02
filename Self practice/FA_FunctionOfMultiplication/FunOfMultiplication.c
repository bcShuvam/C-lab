#include <stdio.h>
#include <stdlib.h>

double multiplicationOfTwoNumbers(double num1, double num2);

int main()
{
    // The program multiplies two number taken form user input of data type int,float and double and displays the result

    // declaring the double data type variables
    double n1,n2,multiplied ;

    // Displaying message to enter first number
    printf("Enter first number : ");
    // Scaning and storing frist number input from user in n1
    scanf("%lf",&n1);

    // Displaying message to enter second number
    printf("Enter second number : ");
    // Scaning and storing second number input from user in n2
    scanf("%lf",&n2);

    // Calling and storing the function in another variable
    multiplied = multiplicationOfTwoNumbers(n1,n2);
    // Displaying the value stored in multiplied variable
    printf("The product is %lf\n",multiplied);

    getchar();
    return 0;
}

double multiplicationOfTwoNumbers(double num1, double num2)
{
    // multiplying num1 and num2
    double product = num1 * num2;

    // retuning value stored in product
    return product;
}
