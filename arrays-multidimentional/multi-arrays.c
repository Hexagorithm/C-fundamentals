#include <stdio.h>

int main() {
	printf("Multidimentional arrays are arrays, which elements are also arrays.\n");
	printf("The basic syntax of a two-dimensional array is:\n");
	printf("	<elementDatatype> <arrayName>[len1][len2]... = { {element1,element2...}, {element1,element2...}, ...}\n");
	printf("   the elementDatatype is the type of the deepest elements, which are encapsulated in the double arrays.\n");
	printf("   The dimensions of the array are defined at initialization, being the number of [] where normally the length of the array dimension is defined.\n");
	printf("   Single dimension arrays are syntaxicly defined the same as multidimensional arrays.\n");
	char twoDimensions[][5] = { {'h','e','l','l','o'}, {'t','h','e','r','e'} }; //need to input length
	char oneDimension;
	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 5; y++) {
			printf("%c", twoDimensions[x][y]);
		}
		printf(" ");
	}
	printf("!\n");
	return 0;
}

