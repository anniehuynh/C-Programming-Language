/*
Returning a pointer from a function
Your task is to write a subroutine that takes a pointer to the first element of
an integer array, as well as an integer variable. The arguments are passed to
the subroutine in this order. The integer variable passed as an argument holds
the number of elements in an array, while the actual array holds the number of
integers specified by the variable.
The subroutine must go through the table and return the address of the element
holding the smallest value to the calling program. After receiving the address,
the main program uses it to print the smallest number contained in the array.
The prototype of the subroutine is the following:
int *address_of_smallest_value(int *numbers, int size);
In the above, the * operator indicates that the function's return value is a
pointer.
*/

//solution
#include<stdio.h>

int *address_of_smallest_value(int *numbers, int size);

int main(void)
{
   int numbers[] = { 21, 55, 5, 3, 43};
   int size = 5;

   int *smallest = address_of_smallest_value(numbers, size);

   printf("The smallest number in the array is: %d", *smallest);
   return 0;
 }
 
 // pointer
int *address_of_smallest_value(int *numbers, int size){
	int *p_smallest = &numbers[0];
	int i = 0;
	int smallest = numbers[0];
	for(i;i<size;i++){
		if(numbers[i]<smallest){
			smallest=numbers[i];
		}
	}
	p_smallest = &smallest;
	return p_smallest;
}
