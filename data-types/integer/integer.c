#include <stdio.h>

//to make a variable the integer type, we use the int keyword
//every variable that is of integer data type is represented by 4 bytes of data
//so its 32 bits of 1 or 0 (one of the bits is specifically reserved for the sign of the number)
//max pos value: +2147483647
//max neg value: -2147483647

int main() {
	int maxpos = 2147483647;
	printf("The biggest number you can have in C is %d, which is just a bunch of 1\'s with the most left bit being 0 (no negative please!).\n", maxpos);
	int maxneg = -2147483647;
	printf("The smallest number you can have in C is %d, which is just a bunch of 1\'s with the most left bit being 1 (negative please!).\n", maxneg);
	printf("Zero is just a bunch of 0\'s \n");
	return 0;

}
