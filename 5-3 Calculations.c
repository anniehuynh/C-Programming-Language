/*
Calculations
Write a simple calculator program that calculates the difference, sum or product
of two numbers. First, the program asks which calculation to perform. After this,
the program prompts for the numbers, performs the calculation and prints the
result. The selection within the program has to be done using a switch() statement.
*/

//solution

#include <stdio.h>
int main()
{
	int first_number, second_number, function_selected;
	printf("1: subtraction\n2: addition\n3: multiplication\n");
	printf("Select function: ");
	scanf("%d", &function_selected);
	
	printf("Enter the first number: ");
	scanf("%d", &first_number);
	printf("Enter the second number: ");
	scanf("%d", &second_number);
	
	switch(function_selected)
	{
		case 1:
			printf("%d - %d = %d", first_number, second_number, first_number - second_number);
			break;
		case 2:
			printf("%d + %d = %d", first_number, second_number, first_number + second_number);
			break;
		case 3:
			printf("%d * %d = %d", first_number, second_number, first_number * second_number);
			break;
	}
	return 0;
}
