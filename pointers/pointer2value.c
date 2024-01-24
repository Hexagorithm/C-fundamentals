#include <stdio.h>

int main() {
	int integer;
	int* integer_pointer = &integer;
	printf("Please input an integer value:");
	scanf("%d",integer_pointer);
	printf("Value at pointer: %p is %d\n",integer_pointer,*integer_pointer);
	*integer_pointer = -1;
	printf("Sike! The value of integer is now: %d\n",integer);
	return 0;
}
