#include <stdio.h>

int main() {
	printf("The basic syntax of declaring an array in C is:\n");
	printf("<array-variables-datatype> <array-name>[<array-size>] = {<value1>, <value2>, ...}");
	double list[2] = {0.5, 0.6};

	int array[] = {0,1,2,3,4,5,6,7,8,9}; //c compiler automatically calculates size
					     //
	int age[5] = {0,1}; // {0,1,0,0,0} c will assign default value (0) to elements that are not defined.
	char letters[2] ={'a'}; // remember, 0 can also be a letter!
	printf("the first letter of letters is: %c\n", letters[1]);

	double doubles[2] = {9.5}; // 0.0 = 0
	printf("The first double of doubles is: %lf\n", doubles[1]);

	return 0;
}
