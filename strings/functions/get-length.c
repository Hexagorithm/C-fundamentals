#include <stdio.h>
#include <string.h>

int main() {
	printf("This program calulates the length of a strin!\n");
	char hello[] = "Hello, world!";
	printf("String: %s\n",hello);
	printf("Length: %zu\n\n", strlen(hello));
	char input[20];
	printf("String: ");
	fgets(input, sizeof(input), stdin);
	printf("Length: %zu\n",strlen(input));
	return 0;
}
