#include <stdio.h>

int main() {
	int number1 = 1;
	int number2 = 1;
	while (number1 < 10) {

		while (number2 < 10) {
			(number1 * number2 > 9) ? 
				printf("%d ", number1 * number2):
				printf(" %d ", number1 * number2);
			number2 ++;
		}
		printf("\n");
		number1 ++;
		number2 = 1;
		
	}
	return 0;
}
