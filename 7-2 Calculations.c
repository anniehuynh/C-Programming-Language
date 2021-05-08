/*
Calculations
Write a calculator program that calculates the sum, difference or product of
two integers. The program asks for the type of calculation first
(1 = sum, 2 = difference, 3 = product). After calculation, the result is printed
on the screen and the program returns to prompt for the next calculation.
You should write a function for each calculation, prompting for the numbers,
performing the desired calculation and printing the answer on the screen.
The program is terminated by entering a negative number just like in the previous
exercise.
*/

//solution
#include <stdio.h>
int number1,number2;
int calculate_sum();
int calculate_difference();
int calculate_product();
void promtanswer();
int main(){
  int choice, sum, difference, product;
	
  do{

    printf("\n1:sum of two numbers\n2:difference of two numbers\n3:product of two numbers\n");
    printf("<0: terminate the program\n");
    printf("Select calculation:");
    scanf("%d", &choice);
    if(choice < 0) {
      printf("Terminating the program...");
    }
    else if(choice == 1) {
		promtanswer();
		sum = calculate_sum();
		printf("%d + %d = %d\n", number1, number2, sum);
	 }
    else if(choice == 2) {
      	promtanswer();
		difference = calculate_difference();
		printf("%d - %d = %d\n", number1, number2, difference);
    }
    else if(choice == 3) {
      	promtanswer();
		product = calculate_product();
		printf("%d * %d = %d\n", number1, number2, product);
    }
    else {
      printf("Terminating the program...\n\n");
    }
  }while(choice>0);

  return 0;
}
	int calculate_sum(){
	int calculate_sum;
	calculate_sum = number1 + number2;
	return calculate_sum;
	}
int calculate_difference(){
	int calculate_difference;
	calculate_difference = number1 - number2;
	return calculate_difference;
	
}
int calculate_product(){
	int calculate_product;
	calculate_product = number1 * number2;
	return calculate_product;
	
}

void promtanswer(){
		
		printf("Enter the first number:");
		scanf("%d", &number1);
		printf("Enter the second number:");
		scanf("%d", &number2);
}
