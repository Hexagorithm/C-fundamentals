#include <stdio.h>

int main() {
	printf("Strings are just arrays of char elements!\n");
	printf("The syntax of string declaration is the same as for array declaration.\n");
	char string[] = "Hello there!";
	printf("The different part lies in the output format of strings.\n");
	printf("We use the percent s format to output the whole char array, instead of one element\n");
	printf("%s\n", string);
	return 0;
}
