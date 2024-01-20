#include <stdio.h>
#include <ctype.h>

int main() {
	printf("ctype is a library dedicated to operations on the character: 'c' type.\n");

	int min = 'a'; //97
	int max = 'z'; //122
	char letter = 'A';
	while ((letter < min) || (letter > max) ) {
		printf("Please input a valid lower character!\n:");
		scanf("%c",&letter);
	}
	char upper_letter = toupper(letter);
	char lower_letter = tolower(upper_letter);
	printf("The upper equivalent to %c is %c\n", letter, upper_letter);
	printf("The lower equivalent to %c is %c\n", upper_letter, lower_letter);


	return 0;
}
