#include <stdio.h>

int main() {
	printf("The purpose of the break statement is to terminate the loop.\n\n");
	
	int start;
	int end;
	printf("Please input the starting integer for a for loop interation!\n:");
	scanf("%d",&start);
	printf("Please input the ending integer for a for loop iteration!\n:");
	scanf("\n%d",&end);
	if (start > end) {
		printf("If you want to play smartass, get the fuck out!\n");
		return 0;	
	}
	
	for (int i = start;i <= end; i++) {
		printf("%d ", i);
		if (i == 10) {
			printf("Oh no! It appears this loop does not like the integer 10!\n");
			break;	
			printf("This loop will not ternimate just because there's a ten XD dont be silly...\n");
		}
	
	}

	printf("Program ended!\n");

	return 0;

}
