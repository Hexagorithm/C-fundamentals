#include <stdio.h>

int main() {
	printf("This program is supposed to always output the a non negative number\n\
based on your input to the program!\n");
	int integer;
	printf("Input an integer!\n:");
	scanf("%d", &integer);
	printf("The integer that you have inputted is: %d\n", integer);
	integer = (integer < 0) ?
	       	integer = integer * (-1) :
	       	integer ;
	printf("The positive version of your integer is: %d\n", integer);
	return 0;
}
