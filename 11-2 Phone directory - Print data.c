
/*
Phone directory - printing data
Write a program that prints all the numbers in the phone directory to the screen.
The file for reading the numbers is the same as in the previous exercise
(phonedir.txt). Upon execution, the program opens the file, reads the data and
prints it.
*/

//solution

#include <stdio.h>
int main() {
        FILE *f;
        char firstname_read[20];
        char lastname_read[20];
        char telephone_read[20];
        int i, n;

        f = fopen("phonedir.txt", "r");
        fscanf(f, "%d", &n);
        
        for(i = 0; i < n; i++) {
                fscanf(f, "%s", firstname_read);
                fscanf(f, "%s", lastname_read);
                fscanf(f, "%s", telephone_read);
                printf("%s %s %s\n", firstname_read, lastname_read, telephone_read);
        }
        fclose(f);

        return 0;
}
