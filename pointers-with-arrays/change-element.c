#include <stdio.h>

int main() {
	int array[5] = {32,425,534,63,73};
	int len = 5;
	printf("Having an array, we can also change its elements in 2 ways:\n");
	
	printf("1.The boring index way:\n");
	printf("  At index: %d the value is %d\n",3, array[3]);
	array[3] = 69;
	printf("  At index: %d the value is %d\n",3, array[3]);

	array[3] = 63;

	printf("2.The sigma adding index to memory address:\n");
	printf("  At index: %d the value is %d\n",3, *(array+3));
	*(array+3) = 69;
	printf("  At index: %d the value is %d\n",3, *(array+3));
	return 0;
}
