/*
Checking if a number is even
Write a program that prompts the user for an integer and checks whether it is
even or odd. If the number is even, print "Number 2 is even.", if it is odd,
print "Number 1 is odd.".
*/

// solution

    #include <stdio.h>
int main(){
	int number_entered;
	printf("Enter an integer: ");
	scanf("%d", &number_entered);
	
	if(number_entered % 2 == 0)
        printf("Number %d is even.\n", number_entered);
    else if (number_entered % 2 == 1)
        printf("Number %d is odd.\n", number_entered);
	else
		printf("Error! Please give a proper integer");
    
    return 0;
}
