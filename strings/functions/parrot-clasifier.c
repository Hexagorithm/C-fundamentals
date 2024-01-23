#include <stdio.h>
#include <string.h> 


int main() {
	printf("This program will classify your parrot-like skills!\n");
	char text1[20];
	char text2[20];
	printf("Please input a string!:");
	fgets(text1, sizeof(text1), stdin);
	printf("Please input the same string again!:");
	fgets(text2, sizeof(text2), stdin);
	
	int result = strcmp(text1,text2);
	printf("The result of the string comparison is: %d\n", result);
	(result == 0) ?
	       	printf("You are a good parrot!\n"):
		printf("You make a shit parrot!\n");

	return 0;
}
