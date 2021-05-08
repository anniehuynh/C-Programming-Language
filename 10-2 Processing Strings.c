
/*
Processing strings
Write a program that prompts the user for a word (max 15 lower-case letters) and
calculates the number of wovels (a, e, i, o, u, y) in the word. Hint:
You have learned to compare the value of a character variable to 'a', for example.
You can use an index to refer to single characters in a string array.
(char[] = "word"; word[1] == 'a';)
*/

//solution

#include<stdio.h>
int main(void){
	char input[15];
	int i,count;
	printf("The program calculates the number of vowels.\n");
	printf("Enter a word:");
	scanf("%s",&input[0]);
	i=0;
	count=0;
	for(i;i<strlen(input);i++)
		{
		if((input[i]=='a')||(input[i]=='e')||(input[i]=='i')||(input[i]=='o')||(input[i]=='u')||(input[i]=='y')){
			count++;
			}
	}
	printf("The word contains %d vowels.",count);
	return 0;
}
