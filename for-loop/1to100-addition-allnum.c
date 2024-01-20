#include <stdio.h>

int main() {
	printf("Here's the result of adding integer numbers from 1 to 100!\n");
	int result = 0;
	for (int i = 1; i <= 100; i++) {
		printf(" %d ",i);
		result = result + i;
	       	if (i == 100) {
		       	printf("=");
			printf(" %d\n", result);
		}
		else {
			printf("+");
		}
	
	}

	return 0;
}
