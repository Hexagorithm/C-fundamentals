#include <stdio.h>

int main() {
	
	int number;
	printf("Please input the week day number!\n:");
	scanf("%d", &number);
	
	switch(number) {
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("This day is a working day!\n");
			break;
		case 1:
		case 7:
			printf("This day is a weekend day!\n");
			break;
		default:
			printf("Invalid weekday number!\n");
			break;	
	}

	return 0;
}
