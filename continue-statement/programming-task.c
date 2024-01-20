#include <stdio.h>

int main() {

	printf("This program will take in input from you,\n");
	printf("'appreciate it' and spit it out if it's a negative odd integer.\n");
	printf("If it is inputted a negative value, it will flip out and terminate,\n");
	printf("If the value is negative even, it will skip displaying it.\n");

	int value;
	while (1) {
		printf("Please input the value!\n:");
		scanf("%d", &value);
		if (value > 0) {
			printf("Positive Value\n");
			break;
		}
		else if ( (value < 0) && (value % 2 == 0) ) {
			printf("Negative Even\n");
			continue;	
		}
		printf("%d\n", value);

	}
	printf("Program has ended!\n");
	
	
	return 0;
}
