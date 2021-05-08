/*
Phone directory - removing a person's data
Write a program for removing a specific person's data from the directory.
The program asks for a first name followed by a last name.
The program checks if the person's data can be found.
If the person is in the directory, the data is removed.
Otherwise print an error message.
*/

//solution

#include <stdio.h>
#include<string.h>

struct person{
  char firstname[20+1]; 
  char lastname[20+1]; 
  char telephone[20+1];
};

int main(void)
{
	struct person personArray[50];
	int items, i, firstCompare, lastCompare, index;
	char first[20+1], last[20+1];
	const char *fileName = "phonedir.txt";
	FILE *opening;

  
  if((opening = fopen(fileName,"r")) == NULL){
    printf("Failed to open the file %s\n", fileName);
  }
  fscanf(opening,"%d", &items);
	for(i=0;i<items;i++){
		fscanf(opening,"%s %s %s",
       	personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  		}
  fclose(opening);

 
	printf("Enter first name:");
	scanf("%s",&first[0]);
	printf("Enter last name:");
	scanf("%s", &last[0]);
	

	for(i=0;i<items;i++){
		firstCompare =strcmp(first,personArray[i].firstname);
		lastCompare= strcmp(last,personArray[i].lastname);
		if(firstCompare==0 && lastCompare==0){
			items -= 1;
			index=i;
		}
	}
	
	
  if((opening = fopen(fileName,"w")) == NULL){
    printf("Failed to open the file %s\n", fileName);
  }
  for(i=0;i<index;i++){
    fprintf(opening,"%d %s %s %s\n",items, personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  }
	for(i=index+1;i<items;i++){
    fprintf(opening,"%s %s %s\n",personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  }	
	
	
	fclose(opening);
	printf("Data removed from the directory.");
	
  return 0;
}
