/*
Handling matrices
The following is the initialisation of a 5 x 5 integer array:
int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};
Copy the initialisation into a program that prints the array on the screen and
calculates the sum of the elements. Each line shall be followed by a newline
character.
*/

//solution

#include <stdio.h>
int main(){
	int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};

	
	int sum=0, x, y;
	printf("In the array:\n");
	for(y=0; y<5; y++)
	{
		for(x=0;x<5;x++)
		{
			sum += matrix[y][x];
		if(x==4){
			printf("%d\n", matrix[y][x]);
		}
			else{
			printf("%d ", matrix[y][x]);
			}
		}
		
	}
	printf("\nthe sum of the elements is %d", sum);	
	return 0;
}
