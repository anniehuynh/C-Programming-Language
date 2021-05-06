/*
Files and strings
Write a program that asks for the user's first and last name and saves these into
a file named by the user.
The program must start by asking for the first name. The last name is entered next,
followed by the desired file name. The first part of the file name may have a
maximum of 8 characters and the second part may have 3 (for example: personal.usr).
The file must reside in the same directory as the program.
The last name can have a maximum of 20 characters, the first name 15.
*/

//solution

#include<stdio.h>

int main()
{
	char first_name[15];
	char last_name[20];
	char file_name[20];
	
	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name:");
	scanf("%s", &first_name[0]);
	printf("Enter your last name:");
	scanf("%s", &last_name[0]);
	printf("File where you want to save your name:");
	scanf("%s", &file_name[0]);

	FILE *opening = fopen(file_name, "w");
		fprintf(opening, "%s %s", first_name, last_name);
		fclose(opening); 
		printf("Successfully saved the data!\n"); 
	return 0;
}
