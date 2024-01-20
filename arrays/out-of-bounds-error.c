#include <stdio.h>

int main() {
	int array[] = {0,1,2,3,4,5};
	printf("\nIf we have an array that looks like this: {0,1,2,3,4,5}\n");
	printf("and we try to access the value of element at index 6\n");
	printf("we get the element value: %d\n\n", array[6]);

	printf("What does that mean? Is the computer hiding some top secret\n");
	printf("variable names from us, the user?\n\n");
	
	printf("Nah, the real reason is a bit boring (at first, but it is quite sophisticated!)\n");
	printf("When we assign a variable name to an array datatype\n");
	printf("we essentially are declaring a symbolic name to an address\n");
	printf("in the memory of the program pointing to the beginnign of the array\n");
	printf("When we specify the index of the element we want to access,\n");
	printf("we are basically saying how many sizes of bytes does the com\n");
	printf("puter need to jump in order to arrive at the beginning of the element.\n");
	printf("when we try to access an index out of bounds of the array\n");
	printf("we are esentially skipping the entire array, accessing data\n");
	printf("stored after the array.\n");
	return 0;
}
