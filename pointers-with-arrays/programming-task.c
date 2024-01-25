#include <stdio.h>

int main() {
	int array[] = {24,12,21,54,48};
	int len = 5;
	int largest = *array;
	printf("The array is {24,12,21,54,48}.\n");
	for (int i = 1; i < len; i++) {
		if (largest < *(array + i)) {
			largest = *(array + i);
		}

	}
	printf("The largest element of the array is %d.\n",largest);


	return 0;
}
