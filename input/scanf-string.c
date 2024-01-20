#include <stdio.h>


int main() {
	char letter;
	printf("With the syntax of \'input:_<letter>_\', please input a letter!\n$");
	scanf("input:_%c_", &letter);
	printf("Your inputted letter: %c\n", letter);
	return 0;
}
