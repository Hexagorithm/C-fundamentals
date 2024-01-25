#include <stdio.h>

int addTwoPointers();

int main() {
	int array[5] = {231,1312,53,432,34};
	int index1 = 2;
	int index2 = 3;
	printf("The result of adding %d and %d is %d\n", *(array+index1),*(array+index2),addTwoPointers( array+index1, array+index2));
	return 0;
}

int addTwoPointers(int* pointer1, int* pointer2) {
	return *pointer1 + *pointer2 ;
}
