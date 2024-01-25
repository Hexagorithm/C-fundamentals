#include <stdio.h>

void squareElement(int* pointer);

int main() {
	int array[4] = {32,23152,4,132};
	printf("Value at index 2: %d\n", *(array+2) );
	squareElement( array + 2 );
	printf("Value at index 2: %d\n", *(array+2));
	return 0;
}


void squareElement(int* pointer) {
	*pointer = (*pointer) * (*pointer);
}
