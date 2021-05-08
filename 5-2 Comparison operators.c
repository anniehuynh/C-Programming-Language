/*Write a program that first asks the user whether they drink coffee or 
tea and then how many cups a day. Finally, the program prints a statement 
in accordance with the following instructions: Coffee 0 to 2 cups: 
"You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", 
Tea 0-2 cups: "You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", 
Otherwise "An error occurred in the program!" The number of cups shall be processed as an 
integer variable and 
the drink as a character variable (c/t). You do not need to account for upper case letters.*/

//solution
 #include <stdio.h>
int main() 
{
	char coffee_tea;
	int number_entered;
	
	printf("Do you drink coffee or tea (c / t)? ");
	coffee_tea = getchar();
	
	printf("How many cups do you drink daily: ");
 	scanf("%d", &number_entered);
	if ((coffee_tea == 'c') || (coffee_tea == 'C'))
	{
		if(number_entered <=2)
			printf("You don't drink a lot of coffee, do you?\n");
		else if (number_entered > 2 && number_entered <=20)
			printf("You drink a lot of coffee!\n");
		else
		printf("An error occurred in the program!\n");
	}
	else if ((coffee_tea == 't') || (coffee_tea == 'C'))
	{
		if(number_entered <=2)
			printf("You do not drink a lot of tea.\n");
		else if (number_entered > 2 && number_entered <=20)
			printf("You drink a lot of tea!\n");
		else
		printf("An error occurred in the program!\n");
	}
	else
		printf("An error occurred in the program!\n");
  return 0;
}
