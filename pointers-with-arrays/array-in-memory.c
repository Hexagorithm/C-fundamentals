#include <stdio.h>

int main() {
	int array[5] = {0,1,2,3,4,};
	int len = 5;
	printf("Let\'s print out the memory addresses of the elements of an integer array(integer is 4 bytes long)!\n");
	for ( int i = 0; i < len; i++ ) {
		printf("The memory address of the element: %d is: %p\n",array[i],&array[i]);
		printf("(4 bytes later...)\n");
	}
	printf("The memory address of the array itself is: %p\n",array);
	printf("From this program, we can see that:\n");
	printf("	1. The memory address of the first letter is also the memory address the array decays to;\n");
	printf("	2. The memory address byte offset of the adjacent elements are always 4 byte, which is the length of each element.\n");
	printf("Let's do the same for a double array(double is 8 bytes)!\n");
	double list[5] = {0,1,2,3,4};
	for (int i = 0 ; i < len; i++) {
		printf("The memory address of the element: %lf is: %p\n",list[i],&list[i]);
		printf("(8 bytes later...)\n");
	}



	return 0;
}
