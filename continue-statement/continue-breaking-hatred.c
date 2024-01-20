#include <stdio.h>

int main() {
	printf("This program not only has a mild discomfort for multiples of 5, but also hates the number 13!\n");
	printf("I hope the program does not encounter a 13, because that would mean a certain death!\n\n");

	int start;
	int end;
	printf("Please input the starting parameter for the loop!\n:");
	scanf("%d",&start);
	
	printf("Please input the ending parameter for the loop!\n:");
	scanf("%d",&end);
	
	if (start > end) {
		printf("You know what, fuck you and your cousin!\n");
		return 0;	
	}
	int outcome = 1;
	for (int i = start; i <= end; i ++ ) {
		if ( i == 13) {
			printf("NO, SCRIPT DONT JUMP!\n");
			outcome = 0;
			break;
		}
		else if ( i % 5 == 0) {
			printf("We are going to omit that...\n");
			continue;
		}
		printf("%d\n", i);	
	}
	
	if (outcome == 1) {
		printf("Program finished succesfully!\n");
	}
	else {
		printf("Program stopped responding...\n");
	}	
	
	return 0;
}
