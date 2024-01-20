#include <stdio.h>

int main() {
	printf("This program loops over integers, with a weird grudge to multiples of 5!\n");
	printf("However this program won't shutdown like a baby when it encounters one,\n");
	printf("It will simply step over it!\n\n");

	int start;
	int end;

	printf("Please input the starting parameter!\n:");
	scanf("%d", &start);

	printf("Please input the ending parameter!\n:");
	scanf("\n%d",&end);

	if (start > end) {
		printf("The only thing that this program hates more\n\
than multiples of 5 are smartasses...\n");
		return 0;

	}
	
	for (int i = start; i <= end; i++) {
		if (i % 5 == 0) {
			printf("We are going to step over that one, i wonder why...\n");
			continue;	
		}
		printf("%d\n", i);

	}
	printf("Program ended!\n");	
	return 0;

}
