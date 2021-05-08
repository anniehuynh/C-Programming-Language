/*
Calculating an average, loop structure
Write a program that asks for the students' exam scores (using integers 4 to 10)
and calculates the average. The program must accept scores until entry is
terminated by a negative integer. Finally, the program prints out the number of
scores and the calculated average with two decimal places of precision.
*/

//solution

#include <stdio.h>

int main()
{
    int number_entered, count= 0;
    float avg,sum=0;
	
	printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
       
	do
    {
       printf("Enter score (4-10):");
        scanf("%d", &number_entered);
		if ((number_entered>=4) && (number_entered <=10))
		{
			sum = sum + number_entered;
			count++;
		}
		else
		{
			printf("You entered %d scores.\n",count);
			avg= (sum / count);
    		printf("Average score: %.2f\n", avg);
		}
     }
		while(number_entered > 0);
	

    return 0;
}
