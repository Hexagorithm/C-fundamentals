#include <stdio.h>

int main() {
	printf("There's an intersting detail about C working with the memory of the computer, visible when we want to input a string into the scanf() function.\n");
	printf("Having a string array as an variable:\n");
	printf("	char string[10];");
	printf("The syntax we used all this time would lead us to believe that in order to get\n");
	printf("a string inputted to the string viariable would be this:\n");
	printf("	scanf(\"\%s\",&string);\n");
	printf("This is, however, NOT CORRECT (gasp)\n");
	printf("Why why doe? How is this any different from what we were doing before?\n");
	printf("You see, before, we were using floats, integers, elements from arrays, single characters, etc");
	printf("We were reffering to datatypes that declared the function of a single object.\n");
	printf("When we declared an integer variable like this:");
	printf("	int integer = 10;\n");



	return 0;
}
