#include <stdio.h>
#include <stdlib.h>

int main() {
	int* ages;
	int amount = 4;
	ages = (int*) malloc(amount * sizeof(int));
	for (int i = 0; i < amount; i++){
		printf("Please input the %d. age: ",i);
		scanf("%d",ages+i);
	}
	printf("Values inputted: ");
	for (int i = 0; i < amount; i++) {
		printf("%d ", *(ages + i));
		
	}
	printf("\n");
	amount = 6;
	ages = realloc(ages, amount * sizeof(int));
	for (int i = 4; i < amount; i++) {
		printf("Please input the %d. age: ", i);
		scanf("%d",ages+i);
	}
	printf("Full values inputted: ");
	for (int i = 0; i < amount; i++) {
		printf("%d ", *(ages+ i));
	}
	printf("\nEnding!\n");
	free(ages);
	return 0;
}
