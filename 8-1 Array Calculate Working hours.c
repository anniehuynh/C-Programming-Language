/*
Working hours calculator
Write a program that calculates the number of hours worked within a specific
period and prints the total number of hours, the average length of a day and an
itemisation of the hours entered. First, the program must ask how many days of
working hours shall be entered (max 30 days). After this, the program asks for
the daily working hours. The program output shall have one decimal place of
precision.
*/

//solution
#include<stdio.h>
void main()
{
	int index, days_entered;
	float hours[30], total_hours=0, avg;
	
	printf("The program calculates the total hours worked during a specific period and the average length of a day.\n\n");
	printf("How many days: ");
	scanf("%d", &days_entered);
	
	for (index=0; index<days_entered;index++)
	{
		printf("Enter the working hours for day %d:", index+1);
		scanf("%f", &hours[index]);
		total_hours += hours[index];	
	}
	
	printf("Total hours worked: %.1f\n", total_hours);
	avg = total_hours/days_entered;
	printf("Average length of day: %.1f", avg);
	printf("\nHours entered: ");
	for (index=0; index<days_entered; index++)
	{
		printf("%.1f ", hours[index]);
	}
	return 0;
}
