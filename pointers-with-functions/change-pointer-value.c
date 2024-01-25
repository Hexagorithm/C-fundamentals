#include <stdio.h>

int findValue();

int main() {
	int array[5] = {13,42,531,75,574};
	printf("The address of the first element in the array: %p\n",array);
	printf("The value of the first element in the array: %d\n",findValue(array));
	return 0;
}


int findValue(int* pointer) {
	return *pointer;
}
