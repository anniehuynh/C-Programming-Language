/*
Writing into a file
Write a program that prints the text "Hello world!" into the file "hello.usr".
The file does not exist, so it must be created. Finally, the program must print
a message on the screen indicating that writing to the file was successful.
The text printed to the file must exactly match the assignment.
*/

//solution
#include <stdio.h> 
int main()
{  
	FILE *opening = fopen("hello.usr", "w");
	fprintf(opening,"Hello world!\n");
	printf("Writing to the file was successful.\nClosing the program.\n");
	fclose(opening);
	return 0;
      
}
