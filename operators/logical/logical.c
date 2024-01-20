#include <stdio.h>
#include <stdbool.h>

int main() {
	int integer1;
	int integer2;
	printf("Please input an integer!\n:");
	scanf("%d", &integer1);
	printf("Please input another integer!\n:");
	scanf("\n%d", &integer2);
	
	printf("In C there are 3 logical operators:\n\
	&& - and\n\
	|| - or\n\
	!  - not\n");

	bool result1 = ( (integer1 > integer2)  && (integer1 < integer2) );
	printf("The logical value of %d > %d and %d < %d is: %d\n",integer1, integer2, integer1, integer2, result1);

	bool result2 = ( (integer1 > integer2) || (integer1 < integer2) );
	printf("The logical value of %d > %d or %d < %d is: %d\n",integer1, integer2, integer1, integer2, result2);

	bool result3 = !(integer1 > integer2);
	printf("The logical value of %d > %d not being true is: %d\n",integer1, integer2, result3);
	
	return 0;
}
