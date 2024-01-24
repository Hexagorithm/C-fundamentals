#include <stdio.h>

int main() {
	int variable;
	int* pointer = &variable;
	printf("Look, here the variable lies: %p\n",pointer);
	printf("This is the same place: %p\n", &variable);
	printf("Please input the integer value of variable! :");
	scanf("%d",pointer);
	printf("The value: %d\n", variable);
	return 0;
}
