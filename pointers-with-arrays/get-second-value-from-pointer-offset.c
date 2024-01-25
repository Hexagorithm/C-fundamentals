#include <stdio.h>

int main() {
	printf("Let\'s analise an array!\n");
	int numbers[5] = {50,63,24,12,4};
	int len = 5;
	printf("Here is the array:\n");
	for (int i = 0; i < len; i++) {
		printf("index: %d , value: %d, address: %p\n",i, numbers[i],&numbers[i]);	
	}
	printf("Heres the address of the 1st element in the array: %p\n", numbers);
	printf("Heres the address of the 2nd element in the array: %p\n", numbers + 1);
	printf("NOTE: We can use the \' numbers + 1 \' syntax to refference the 2nd array element, because when C gets this syntax, it will not just add 1 to the memory address, but 1 * the byte size of the elements of the array!\n");
	return 0;
}
