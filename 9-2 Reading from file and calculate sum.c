
/*
Reading from a file
The file "numbers.s" contains 4 integers. The numbers are on the first line of
the file, separated by spaces. Write a program that reads the integers from the
file and calculates their sum. Finally, the program prints the numbers and the
sum on the screen.
*/

//solution

#include <stdio.h>
int main()
{
	FILE *opening;
	opening = fopen("numbers.s","r");
	int i, sum=0, number_array[4];
	
	if (opening == NULL)
	{
		printf("File not found!");
		return 0;
	}
	else {
		for (i=0;i<4; i++)
		{
		fscanf(opening, "%d", &number_array[i]);
		sum += number_array[i];		
		}		
		printf("Numbers found in the file numbers.s: \n");
		for(i=0;i<4;i++) {
		scanf("%d", number_array[i]);
		}
		printf("%d, %d, %d and %d", number_array[0], number_array[1], number_array[2], number_array[3]);
		fclose(opening);
	}
	
	printf("\n\nSum of the numbers: %d ", sum);
	return 0;
}
