#include <stdio.h>

int main() {
	printf("Here's the result of adding odd integer numbers from 1 to 100!\n");
	int result = 0;
	for (int i = 1; i <= 100; i=i+2) {
		printf(" %d ",i);
		result = result + i;
		if (i+2 <= 100) {
		printf("+");
		}
		else {
			printf("= %d\n",result);
		}
	
	}

	return 0;
}
