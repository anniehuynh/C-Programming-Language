/*
Phone directory - adding data
In this chapter, we create independent programs that are closely associated with
each other. All the programs are components of a phone directory program.
The intention is that you can continue your programming exercises by programming
a phone directory. The exercises in this chapter can easily be converted into
functions for a larger entity.
The name and number data for the phone directory are contained in the file
"phonedir.txt" which has the following format:
4
Firstname Lastname 050-3500980
John Doe 041-3478924
Brian Smith 040-3980982
Brita Smith 05-4567393
The first line of the file indicates the number of names added to the directory
as an integer. The first name, last name and telephone number are processed in
text format. The data items are separated by spaces in the file, and the length
of an individual item (such as a first name) may be no more than 20 characters.
Each line includes the information for one person only. The directory may
contain a maximum of 50 people. Your first task is to write a program for adding
a new telephone number to the directory. Upon execution, the program must first
ask for a first name, after which it prompts for a last name and a telephone
number. When data is saved, the value on the first line of the file must increase
by one. Note that in order to simplify the exercise, the data to be entered may
not include a newline character, for example. Each personal data item is stored
on its own line. (Remember the newline character.)
*/
//solution
#include <stdio.h> 
int main(void){
	int i;

	struct phoneBook{
		char first_name[20];
		char last_name[20];
		char phone[20];
	};
	
	struct phoneBook person[50];
		
		printf("Enter first name:");
		scanf("%s",&person[0].first_name[0]);
		
		printf("Enter last name:");
		scanf("%s",&person[0].last_name[0]);
		
		printf("Enter telephone number:");
		scanf("%s",&person[0].phone[0]);
	FILE *opening;
	opening=fopen("phonedir.txt","w");
	if(opening==NULL){
		printf("Error opening file.");
		return 0;
	}
	else
	{
		
			fprintf(opening,"%s %s %s",person[0].first_name, person[0].last_name, person[0].phone);
		
	}
	
	fclose(opening);
	printf("Successfully saved the data.");
	
	return 0;
}
