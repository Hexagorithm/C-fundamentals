#include <stdio.h>

int main() {
	printf("The difference between while loops and do while loops is\n\
that the do while loop will execute the condition\n\
once even if the condition is wrong in the first\n\
iteration.\n\n");

	int condition = 1;
	printf("Do while loop:\n");
	do {
		printf("You will see this text even if the condition is wrong!\n");
	} while (condition != 1);
	
	printf("While loop:\n");
	while (condition != 1) {
		printf("You will never see this text!\n");	
	}
	return 0;

}
