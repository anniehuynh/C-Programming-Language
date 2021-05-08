/*
Reading from the keyboard and printing
Write a program that prompts the user for an integer, calculates the square and
prints the result on the screen (also print out a newline character \n after the
result). After printing, the program closes itself.
*/


// solution
#include <stdio.h>
int main() {
	int number, square_number;
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	square_number = number * number;
	
	printf("The square of the number you entered is %d\n", square_number);
	
	return 0;
}
