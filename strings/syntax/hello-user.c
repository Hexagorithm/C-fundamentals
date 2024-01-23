#include <stdio.h>

int main() {
	char name[10];
	printf("Please input your name!(0-10 chars):");
	scanf("%s",name);
	printf("Hello, %s!\n",name);
	return 0;
}
