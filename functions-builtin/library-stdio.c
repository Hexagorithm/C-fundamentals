#include <stdio.h>

int main() {
	
	int integer;
	printf("Hello, I am a built-in function!\n");
	printf("Can you input an integer to be picked up by this other built-in function?\n:");
	scanf("%d",&integer);
	printf("Your integer variable: %d\n", integer);
	return 0;

}
