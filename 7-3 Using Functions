/*
Using functions
Write a program that takes three integers as input and prints the smallest and
largest of these numbers. The main program must prompt for integers and read
them. Write the functions largest() and smallest() that receive the entered
numbers as their parameters. Correspondingly, the functions shall return values
corresponding to their names.
*/

//solutions

#include<stdio.h>
void smallest();
void largest();
int main(){
	int number1, number2, number3;
	printf("Enter the 1. number: ");
	scanf("%d", &number1);
	printf("Enter the 2. number: ");
	scanf("%d", &number2);
	printf("Enter the 3. number: ");
	scanf("%d", &number3);
	
	if((number1 >= number2) && (number1>= number3)) //if number1 is the largest number
	   {
		largest(number1);
		   if (number2 <= number3) //if number1 is the largest and number2 is the smallest
			   smallest(number2);
		   else if(number3 <= number2) // if number1 is the largest and number3 is the smallest
			   smallest(number3);
	   }
	else if((number2 >= number1) && (number2>= number3))//if number2 is the largest number
	   {
		largest(number2);
		   if (number1 <= number3)//if number2 is the largest and number1 is the smallest
			   smallest(number1);
		   else if(number3 <= number1) // if number2 is the largest and number3 is the smallest
			   smallest(number3);
	   }
	else if((number3 >= number1) && (number3>= number2))//if number3 is the largest number
	   {
		largest(number3);
		   if (number1 <= number2)//if number3 is the largest and number1 is the smallest
			   smallest(number1);
		   else if(number2 <= number1) // if number3 is the largest and number2 is the smallest
			   smallest(number2);
	   }
			return 0;
}
void largest(int large) {
	printf("Among the numbers you entered, \nthe largest was %d and the smallest was ",large);
}
			
void smallest(int small){
	printf("%d.", small);
}
