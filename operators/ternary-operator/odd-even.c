#include <stdio.h>

int main() {
	printf("This program checks if the integer you give it is even or odd.\n");
	int integer;
	printf("Please, input your integer!\n:");
	scanf("%d",&integer);
	(integer % 2 == 0) ?
		printf("Your number is even!\n") :
		printf("Your number is odd!\n");
	return 0;
}
