#include <stdio.h>

int main() {
	int number;
	printf("Please input the number of the month!\n:");
	scanf("%d", &number);

	switch (number) {
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			printf("I was too lazy to hardcode this in");
			break;
		default:
			printf("Invalid month number");
			break;
	}
	printf("!\n");


	return 0;
}
