#include <stdio.h>

int* getNextPointer();

int main() {
	int array[5] = {23,53,121,75,34};
	int* pointer0 = array;
	printf("The 0th element of the array: %d\n",*pointer0);
	printf("The 1st element of the array: %d\n",*getNextPointer(pointer0));
	printf("The 2nd element of the array: %d\n",*getNextPointer(getNextPointer(pointer0)));
	printf("The 3rd element of the array: %d\n",*getNextPointer(getNextPointer(getNextPointer(pointer0))));
	printf("The 4th element of the array: %d\n",*getNextPointer(getNextPointer(getNextPointer(getNextPointer(pointer0)))));
	return 0;
}

int* getNextPointer(int* pointer) {
	pointer++;
	return pointer;
}
