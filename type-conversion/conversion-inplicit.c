#include <stdio.h>

int main() {
	char letter;
	int number;
	printf("Please, input a letter!\n:");
	scanf("%c",&letter);
	printf("Please, input a number!\n:");
	scanf("\n%d",&number);
	printf("The int type is the most important type in all of C.\n\
		Char types are actually integers in disquise!\n\
		When adding a number and an int, the number is converted into an integer.\n\
		Like this:\n");
	printf("%c --> %d\n", letter, letter);
	
	printf("So the equasion:\n");
	printf("%d + %c = %d\n", number, letter, letter + number);
	printf("is actually:\n");
	printf("%d + %d = %d\n", letter, number, letter + number);
	

	char char1;
	char char2;	
	printf("Input a char!\n:");
	scanf("\n%c",&char1);
	printf("Input another char!\n:");
	scanf("\n%c",&char2);

	printf("The same would happen if we added to chars together!\n\
		Instead dof concatination, C would convert each char type\n\
		into an integer type, sum them up and convert it to the type we expect.\n");
	printf("So another equasion looking like:\n");
	printf("%c + %c = %c\n", char1, char2, char1 + char2);
	printf("Is actually:\n");
	printf("%c + %c --> %d + %d = %d --> %c\n", char1, char2, char1, char2, char1 + char2, char1+ char2);
	printf("This is known as implicit type conversion, where the complier automatically converts one datatype into another.\n");
	printf("Inplicit type conversion works based on the datatype hierarchy.\n");
	return 0;
}
