#include <stdio.h>
#include <stdbool.h>


int main() {
	int integer1;
	int integer2;
	printf("Please input an integer!\n:");
	scanf("%d", &integer1);
	printf("Please input another integer!\n:");
	scanf("%d", &integer2);
	bool result12 = (integer1 > integer2);
	printf("We found that %d > %d yields the logic value of: %d\n",integer1, integer2, result12);
	printf("Here is the list of all the operators:\n\
	>  - greater than\n\
	<  - less than\n\
	== - equal to\n\
	!= - not equal to\n\
	<= - less than or equal to\n\
	>= - greater than or equal to\n");
	return 0;
}
