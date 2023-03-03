#include <stdio.h>
#include <conio.h>

int main()
{
	// LAB 1
	// WAP to compute the product of three integers

	// initializing required variables
	int num1, num2, num3, product;
	num1 = 3;
	num2 = 5;
	num3 = 6;

	// multiplying num1 , num2, num3 and storing it to product variable
	product = num1 * num2 * num3;

	// printing the resulted stored in product
	printf("The product of %d, %d and %d is %d", num1, num2, num3, product);

	getch();
	return 0;
}

// Output :
//			The product of 3,5 and 6 is 90
